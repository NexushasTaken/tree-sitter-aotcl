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
  externals: $ => [
    $._string_content,
  ],
  inline: $ => [
    $._expression,
    $._primary,
    $._class_member,
    $._statement,
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat(choice(
      $.class_specifier,
      $.extension_specifier,
      $.cutscene_specifier,
      $.component_specifier,
    )),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    _class_declaration: $ => seq(
      field("name", $.identifier),
      field("body", $.class_block),
    ),
    class_specifier: $ => seq("class", $._class_declaration),
    extension_specifier: $ => seq("extension", $._class_declaration),
    cutscene_specifier: $ => seq("cutscene", $._class_declaration),
    component_specifier: $ => seq("component", $._class_declaration),

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
    field_access: $ => prec.left(PREC.MEMBER, seq(
      field("object", $._primary),
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
      field("right", $._expression),
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
      $.self,
      $.parenthesized_expression,
    ),
    parenthesized_expression: $ => prec(PREC.PARENS, seq("(", $._expression, ")")),
    string_primitive: $ => seq(
      '"',
      $._string_content,
      '"',
    ),
    null_primitive: _ => "null",
    bool_primitive: _ => choice("true", "false"),
    decimal_primitive: _ => DIGITS,
    decimal_floating_point_primitive: _ => DECIMAL_FLOAT,

    line_comment: $ => token(seq("#", /.*/)),
    block_comment: $ => token(seq(
      "/*",
      /[^*]*\*+([^/*][^*]*\*+)*/,
      "/",
    )),
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
