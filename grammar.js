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
  MEMBER: 9,         // member access
  CALL: 10,          // function call
};


module.exports = grammar({
  name: "aotcl",

  supertypes: $ => [
    $._primary,
  ],
  extras: $ => [
    $.line_comment,
    $.block_comment,
    /\s/,
  ],
  inline: $ => [
    $._expression,
    $._primary,
    $._class_member,
    $._statement,
  ],
  conflicts: $ => [
    [$.procedure_call, $.argument_list]
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._top_level),

    _top_level: $ => choice($.class_declaration),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    class_declaration: $ => seq(
      // TODO: move "extension", "cutscene" and "component" to another rule?
      choice("class", "extension", "cutscene", "component"),
      field("name", $.identifier),
      field("body", $.class_block),
    ),
    class_block: $ => seq(
      "{",
      repeat($._class_member),
      "}",
    ),
    _class_member: $ => choice(
      alias($.assignment, $.instance_variable),
      $.procedure_declaration,
    ),

    procedure_declaration: $ => seq(
      choice("function", "coroutine"),
      field("name", $.identifier),
      field("parameters", alias($.procedure_parameters, $.parameters)),
      field("body", $.block),
    ),
    procedure_parameters: $ => seq(
      "(",
      commaSep($.identifier),
      ")",
    ),

    self: _ => "self",
    _object: $ => choice(
      alias($.identifier, $.object),
      $.self,
      $.field_access,
      $.procedure_call,
    ),
    field_access: $ => prec.left(PREC.MEMBER, seq(
      field("object", $._object),
      ".",
      field("field", $.identifier),
    )),
    procedure_call: $ => prec.left(PREC.CALL, seq(
      field("procedure", choice($.field_access, $.identifier)),
      field("arguments", $.argument_list),
    )),
    argument_list: $ => seq(
      "(",
      commaSep(repeat($._expression)),
      ")",
    ),

    _compound_statement: $ => choice(
      $.if_statement,
      $.while_statement,
      $.for_statement,
    ),
    _simple_statement: $ => seq(
      choice(
        $.procedure_call,
        $.return_statement,
        $.wait_statement,
      ),
      ";",
    ),
    _statement: $ => choice(
      $.assignment,
      $._compound_statement,
      $._simple_statement,
    ),
    assignment: $ => prec(PREC.ASSIGN, seq(
      field("left", choice($.field_access, $.identifier)),
      choice("=", "+=", "-=", "*=", "/="),
      field("right", $._expression),
      ";"
    )),
    if_statement: $ => seq(
      "if",
      field("condition", alias($.parenthesized_expression, $.expression)),
      field("body", $.block),
      field("alternative", repeat($.elif_clause)),
      field("alternative", optional($.else_clause)),
    ),
    elif_clause: $ => seq(
      "elif",
      field("condition", alias($.parenthesized_expression, $.expression)),
      field("body", $.block),
    ),
    else_clause: $ => seq(
      "else",
      field("body", $.block),
    ),
    while_statement: $ => seq(
      "while",
      field("condition", alias($.parenthesized_expression, $.expression)),
      field("body", $.block),
    ),
    for_statement: $ => seq(
      "for",
      "(",
      field("left", $.identifier),
      "in",
      field("right", $._expression, $.expression),
      ")",
      field("body", $.block),
    ),
    return_statement: $ => seq(
      "return",
      optional($._expression),
    ),
    wait_statement: $ => seq(
      "wait",
      $._expression,
    ),

    block: $ => seq(
      "{",
      repeat($._statement),
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
      ].map(([operator, precedence]) => prec.left(precedence, seq(
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
      $.procedure_call,
      $.parenthesized_expression,
    ),
    parenthesized_expression: $ => prec(PREC.PARENS, seq("(", $._expression, ")")),
    string_primitive: _ => seq(
      '"',
      token.immediate(optional(/[^\\"\n]+/)),
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

identifier        = /[a-zA-Z_][a-zA-Z0-9_]* / ;

class_declaration = 'class' identifier class_block ;
class_block       = '{' class_member* '}' ;
class_member      = assignment | procedure_declaration ;

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
                  | procedure_call
                  | paren_expr ;
paren_expr        = '(' expression ')' ;

TODO: rework these rules?
object            = 'self' | identifier | field_access | procedure_call ;
field_access      = object '.' identifier ;
procedure_call    = ( field_access | identifier ) argument_list ;
argument_list     = '(' expression ( ',' expression )* ')' ;

procedure_decl    = 'function' identifier procedure_params procedure_block ;
procedure_params  = '(' identifier* ')' ;
procedure_block   = '{' statement* '}' ;

assignment        = ( field_access | identifier ) ( '=' | '+=' | '-=' | '*=' | '/=' ) expression ';' ;

compound_statement = if_statement | while_statement | for_statement ;
if_statement      = 'if' paren_expr block elif_clause* else_clause? ;
elif_clause       = 'elif' paren_expr ;
else_clause       = 'else' block ;

while_statement   = 'while' paren_expr block ;
for_statement     = 'for' '(' identifier 'in' expression ')' block ;

simple_statement  = ( procedure_call | return_statement | wait_statement ) ';' ;
return_statement  = 'return' expression ;
wait_statement    = 'wait' expression ;

statement         = assignment | compount_statement | simple_statement ;
block             = '{' statement* '}' ;
*/
