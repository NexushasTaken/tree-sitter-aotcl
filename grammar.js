/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const DIGITS = repeat1(/[0-9]/);
const DECIMAL_FLOAT = token(seq(DIGITS, ".", optional(DIGITS)));

const PREC = {
  COMMENT: 0,        // #  /* */
  ASSIGN: 1,         // =  +=  -=  *=  /=
  PRIMITIVE: 2,
  OR: 3,             // ||
  AND: 3,            // &&
  EQUALITY: 4,       // ==  !=
  REL: 4,            // <  <=  >  >=
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
      alias($.assignment, $.instance_variable),
      $.method_declaration,
    ),

    method_declaration: $ => seq(
      "function",
      field("name", $.identifier),
      field("parameters", $.method_parameters),
      field("body", $.method_block),
    ),
    method_parameters: $ => seq(
      "(",
      commaSep($.identifier),
      ")",
    ),
    method_block: $ => seq(
      "{",
      repeat($.statement),
      "}"
    ),

    // _access: $ => choice(
    //   $.variable_access,
    //   $.method_call,
    // ),
    // variable_access: $ => seq(
    //   $.identifier,
    //   repeat(seq(".", $.identifier)),
    // ),
    // method_call: $ => seq(
    //   alias($.identifier, $.method_name),
    //   $.method_argument,
    // ),
    // method_argument: $ => seq(
    //   "(",
    //   repeat($._expression),
    //   ")",
    // ),

    statement: $ => choice(
      $.assignment,
    ),
    assignment: $ => prec(PREC.ASSIGN, seq(
      field("left", $.identifier),
      choice("=", "+=", "-=", "*=", "/="),
      field("right", $._expression),
      ";"
    )),

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
                  | '(' expression ')' ;

method_decl     = 'method' identifier method_params method_block ;
method_params   = '(' identifier* ')' ;
method_block    = '{' statement* '}' ;

access            = variable_access | method_call ;
variable_access   = identifier ( '.' identifier )* ;
method_call     = variable_access method_args ;
method_args     = '(' expression* ')' ;

assignment        = access ( '=' | '+=' | '-=' | '*=' | '/=' ) expression ';' ;
statement         = assignment ;
*/

