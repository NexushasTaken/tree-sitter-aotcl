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
    $._value,
    $._primitive,
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => choice($.class_specifier),
    class_specifier: $ => seq(
      "class",
      field("name", alias($.identifier, $.type_identifier)),
      field("body", $.class_body),
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    class_body: $ => seq(
      "{",
      repeat($._class_body_declaration),
      "}",
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
      "}",
    ),

    _class_body_declaration: $ => choice(
      $.method_declaration,
      field("declarator", alias($.variable_declaration, $.class_variable)),
    ),

    _value: $ => choice(
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

    variable_declaration: $ => seq(
      field("name", $.identifier),
      "=",
      field("value", $._value), // TODO: temporary
      ";",
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

