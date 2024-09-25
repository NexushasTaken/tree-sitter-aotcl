/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const DIGITS = token(/[0-9]+/);
const DECIMAL_FLOAT = token(/[0-9]+\.([0-9]+)?/);

const PREC = {
  COMMENT: 0,        // #  /* */
  ASSIGN: 1,         // =  +=  -=  *=  /=
  PRIMITIVE: 2,
  OR: 3,             // ||
  AND: 3,            // &&
  EQUALITY: 4,       // ==  !=
  REL: 4,            // <  <!-- <=  > -->  >=
  ADD: 5,            // +  -
  MULT: 6,           // *  /
  UNARY: 7,          // -  !
  PARENS: 8,         // (expression)
  ACCESS: 9,         // member access
  INVOKE: 10,        // function call
};


module.exports = grammar({
  name: "aotcl",

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /\s/,
  ],
  inline: $ => [
    $._expression,
    $._primary,
    $._class_member,
    $._compound_statement,
  ],
  conflicts: $ => [
    [$.method_call, $.argument_list]
  ],

  rules: {
    source_file: $ => repeat($._top_level),

    _top_level: $ => choice($.class_declaration),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    class_declaration: $ => seq(
      "class",
      field("name", alias($.identifier, $.type_identifier)),
      field("body", $.class_block),
    ),
    class_block: $ => seq(
      "{",
      repeat($._class_member),
      "}",
    ),
    _class_member: $ => choice(
      // FIX: (field_access) exist in (instance_variable) declaration
      alias($.assignment, $.instance_variable),
      $.method_declaration,
    ),

    method_declaration: $ => seq(
      "function",
      field("name", $.identifier),
      field("parameters", alias($.method_parameters, $.parameters)),
      field("body", $.block),
    ),
    method_parameters: $ => seq(
      "(",
      commaSep($.identifier),
      ")",
    ),

    object: $ => choice(
      alias($.identifier, $.object),
      $.field_access,
      $.method_call,
    ),
    field_access: $ => prec.left(PREC.ACCESS, seq(
      field("object", $.object),
      ".",
      field("field", $.identifier),
    )),
    method_call: $ => seq(
      field("method", choice($.field_access, $.identifier)),
      field("arguments", $.argument_list),
    ),
    argument_list: $ => prec.left(PREC.INVOKE, seq(
      "(",
      commaSep(repeat($._expression)),
      ")",
    )),

    _compound_statement: $ => choice(
      $.if_statement,
      $.while_statement,
      $.for_statement,
    ),
    statement: $ => choice(
      $.assignment,
      $._compound_statement,
      seq($.method_call, ";"),
    ),
    assignment: $ => prec(PREC.ASSIGN, seq(
      field("left", choice($.field_access, $.identifier)),
      choice("=", "+=", "-=", "*=", "/="),
      field("right", $._expression),
      ";"
    )),
    if_statement: $ => seq(
      "if",
      "(",
      field("condition", alias($._expression, $.expression)),
      ")",
      field("body", $.block),
      field("alternative", repeat($.elif_clause)),
      field("alternative", optional($.else_clause)),
    ),
    elif_clause: $ => seq(
      "elif",
      "(",
      field("condition", alias($._expression, $.expression)),
      ")",
      field("body", $.block),
    ),
    else_clause: $ => seq(
      "else",
      field("body", $.block),
    ),
    while_statement: $ => seq(
      "while",
      "(",
      field("condition", alias($._expression, $.expression)),
      ")",
      field("body", $.block),
    ),
    for_statement: $ => seq(
      "for",
      "(",
      field("left", $.identifier),
      "in",
      field("right", alias($._expression, $.expression)),
      ")",
      field("body", $.block),
    ),

    block: $ => seq(
      "{",
      repeat($.statement),
      "}",
    ),

    _expression: $ => choice(
      $.unary,
      $.binary,
      $._primary,
    ),
    binary: $ => choice(
      ...[
        [">", PREC.REL],
        ["<", PREC.REL],
        [">=", PREC.REL],
        ["<=", PREC.REL],
        ["==", PREC.EQUALITY],
        ["!=", PREC.EQUALITY],
        ["&&", PREC.AND],
        ["||", PREC.OR],
        ["+", PREC.ADD],
        ["-", PREC.ADD],
        ["*", PREC.MULT],
        ["/", PREC.MULT],
      ].map(([operator, precedence]) => prec.left(precedence, seq(
          field("left", $._expression),
          // @ts-ignore
          field("operator", operator),
          field("right", $._expression),
        ))),
    ),
    unary: $ => choice(
      ...[
        ["-", PREC.UNARY],
        ["!", PREC.UNARY],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          // @ts-ignore
          field("operator", operator),
          field("operand", $._expression)),
        )),
    ),

    _primary: $ => choice(
      $.string_primitive,
      $.null_primitive,
      $.bool_primitive,
      $.decimal_primitive,
      $.decimal_floating_point_primitive,
      $.identifier,
      $.field_access,
      $.method_call,
      $.parenthesized_expression,
    ),
    parenthesized_expression: $ => prec(PREC.PARENS, seq("(", $._expression, ")")),
    string_primitive: _ => seq(
      '"',
      token.immediate(/[^\\"\n]+/),
      '"',
    ),
    null_primitive: _ => "null",
    bool_primitive: _ => choice("true", "false"),
    decimal_primitive: _ => DIGITS,
    decimal_floating_point_primitive: _ => DECIMAL_FLOAT,

    comment: $ => choice(
      $.line_comment,
      $.block_comment,
    ),
    line_comment: $ => token(prec(PREC.COMMENT, seq("#", /(\\+(.|\r?\n)|[^\\\n])*/))),
    block_comment: $ => token(prec(PREC.COMMENT, seq(
      "/*",
      /[^*]*\*+([^/*][^*]*\*+)*/,
      "/",
    ))),
  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return sep1(rule, ",");
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

/*
string_primitive  = STRING ;
null_primitive    = 'null' ;
bool_primitive    = 'true' | 'false' ;
decimal_primitive = DIGITS ;
floating_point    = DIGITS '.' DIGITS ;

identifier        =  / [a-zA-Z_][a-zA-Z0-9_]* / ;

class_declaration = 'class' identifier class_block ;
class_block       = '{' class_member* '}' ;
class_member      = assignment | method_declaration ;

# expression        = equality ;
# equality          = comparison ( ( '!=' | '==' ) comparison )* ;
# comparison        = term ( ( '>' | '>=' | '<' | '<=' ) term )* ;
# term              = factor ( ( '-' | '+' ) factor )* ;
# factor            = unary ( ( '/' | '*' ) unary )* ;

expression        = binary | unary | primary ;
binary            = expression ( '!=' | '==' | '>' | '>=' | '<' | '<=' | '-' | '+' | '/' | '*' ) expression;
unary             = ( '!' | '-' ) expression ;

primary           = string_primitive
                  | null_primitive
                  | bool_primitive
                  | decimal_primitive
                  | floating_point
                  | identifier
                  | field_access
                  | method_call
                  | '(' expression ')' ;

TODO: rework this rules?
object            = identifier | field_access | method_call ;
field_access      = object '.' identifier ;
method_call       = ( field_access | identifier ) argument_list ;
argument_list     = '(' expression* ')' ;

self.a
self.a.b
self.b()
self.a().b()
self.a().b().a.b

method_decl       = 'method' identifier method_params method_block ;
method_params     = '(' identifier* ')' ;
method_block      = '{' statement* '}' ;

assignment        = ( identifier | field_access ) ( '=' | '+=' | '-=' | '*=' | '/=' ) expression ';' ;
statement         = assignment ;
*/

