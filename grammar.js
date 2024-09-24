/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const DIGITS = repeat1(/-?[0-9]/);

module.exports = grammar({
  name: "aotcl",

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /\s/,
  ],
  inline: $ => [
    $._class_body_declaration,
    $._primitive,
    $.expression,
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => choice($.class_specifier),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    class_specifier: $ => seq(
      "class",
      field("name", alias($.identifier, $.type_identifier)),
      field("body", $.class_body),
    ),
    class_body: $ => seq(
      "{",
      repeat($._class_body_declaration),
      "}",
    ),
    _class_body_declaration: $ => field("member", choice(
      $.method_declaration,
      alias($.member_assignment, $.instance_variable),
    )),

    method_declaration: $ => seq(
      "function",
      field("name", $.identifier),
      field("parameters", $.method_parameters),
      field("body", $.block),
    ),
    member_assignment: $ => seq(
      field("right", $.identifier),
      "=",
      field("left", $.expression),
      ";"
    ),

    assignment: $ => seq(
      field("right", choice(
        $.self,
        $.identifier,
        $.member_expression,
      )),
      "=",
      field("left", $.expression),
      ";"
    ),

    self: _ => "self",

    member_expression: $ => seq(
      choice(
        $.self,
        $.identifier,
      ),
      ".",
      choice(
        $.member_expression,
        $.identifier,
      ),
    ),

    method_parameters: $ => seq(
      "(",
      commaSep($.identifier),
      ")",
    ),
    block: $ => seq(
      "{",
      optional(repeat($.statement)),
      "}",
    ),
    statement: $ => choice(
      $.assignment,
    ),

    expression: $ => choice(
      $.member_expression,
      $.identifier,
      $.primary_expression,
    ),

    primary_expression: $ => choice(
      $._primitive,
    ),
    _primitive: $ => choice(
      $.string_primitive,
      $.null_primitive,
      $.bool_primitive,
      $.decimal_primitive,
      $.decimal_floating_point_primitive,
    ),
    null_primitive: $ => "null",
    string_primitive: $ => seq(
      '"',
      token.immediate(prec(1, /[^"\\]+/)),
      '"',
    ),
    bool_primitive: $ => choice("true", "false"),
    decimal_primitive: $ => DIGITS,
    decimal_floating_point_primitive: $ => seq(
      DIGITS,
      ".",
      optional(DIGITS),
    ),

    comment: $ => choice(
      $.line_comment,
      $.block_comment,
    ),
    line_comment: $ => seq("#", /(\\+(.|\r?\n)|[^\\\n])*/),
    block_comment: $ => seq(
      "/*",
      /[^*]*\*+([^/*][^*]*\*+)*/,
      "/",
    ),
  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

