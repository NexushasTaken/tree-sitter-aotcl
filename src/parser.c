#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 3
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_class = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_function = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DOT = 9,
  anon_sym_EQ = 10,
  anon_sym_PLUS_EQ = 11,
  anon_sym_DASH_EQ = 12,
  anon_sym_STAR_EQ = 13,
  anon_sym_SLASH_EQ = 14,
  anon_sym_SEMI = 15,
  anon_sym_GT = 16,
  anon_sym_LT = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_AMP_AMP = 22,
  anon_sym_PIPE_PIPE = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_BANG = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_string_primitive_token1 = 30,
  sym_null_primitive = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  aux_sym_decimal_primitive_token1 = 34,
  sym_decimal_floating_point_primitive = 35,
  sym_line_comment = 36,
  sym_block_comment = 37,
  sym_source_file = 38,
  sym__top_level = 39,
  sym_class_declaration = 40,
  sym_class_block = 41,
  sym_method_declaration = 42,
  sym_method_parameters = 43,
  sym_method_block = 44,
  sym_field_access = 45,
  sym_statement = 46,
  sym_assignment = 47,
  sym_binary = 48,
  sym_unary = 49,
  sym_parenthesized_expression = 50,
  sym_string_primitive = 51,
  sym_bool_primitive = 52,
  sym_decimal_primitive = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_class_block_repeat1 = 55,
  aux_sym_method_parameters_repeat1 = 56,
  aux_sym_method_block_repeat1 = 57,
  aux_sym_decimal_primitive_repeat1 = 58,
  alias_sym_instance_variable = 59,
  alias_sym_object = 60,
  alias_sym_type_identifier = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_SEMI] = ";",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_BANG] = "!",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_primitive_token1] = "string_primitive_token1",
  [sym_null_primitive] = "null_primitive",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_decimal_primitive_token1] = "decimal_primitive_token1",
  [sym_decimal_floating_point_primitive] = "decimal_floating_point_primitive",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_class_declaration] = "class_declaration",
  [sym_class_block] = "class_block",
  [sym_method_declaration] = "method_declaration",
  [sym_method_parameters] = "method_parameters",
  [sym_method_block] = "method_block",
  [sym_field_access] = "field_access",
  [sym_statement] = "statement",
  [sym_assignment] = "assignment",
  [sym_binary] = "binary",
  [sym_unary] = "unary",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_string_primitive] = "string_primitive",
  [sym_bool_primitive] = "bool_primitive",
  [sym_decimal_primitive] = "decimal_primitive",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_block_repeat1] = "class_block_repeat1",
  [aux_sym_method_parameters_repeat1] = "method_parameters_repeat1",
  [aux_sym_method_block_repeat1] = "method_block_repeat1",
  [aux_sym_decimal_primitive_repeat1] = "decimal_primitive_repeat1",
  [alias_sym_instance_variable] = "instance_variable",
  [alias_sym_object] = "object",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_primitive_token1] = aux_sym_string_primitive_token1,
  [sym_null_primitive] = sym_null_primitive,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_decimal_primitive_token1] = aux_sym_decimal_primitive_token1,
  [sym_decimal_floating_point_primitive] = sym_decimal_floating_point_primitive,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
  [sym_class_declaration] = sym_class_declaration,
  [sym_class_block] = sym_class_block,
  [sym_method_declaration] = sym_method_declaration,
  [sym_method_parameters] = sym_method_parameters,
  [sym_method_block] = sym_method_block,
  [sym_field_access] = sym_field_access,
  [sym_statement] = sym_statement,
  [sym_assignment] = sym_assignment,
  [sym_binary] = sym_binary,
  [sym_unary] = sym_unary,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_string_primitive] = sym_string_primitive,
  [sym_bool_primitive] = sym_bool_primitive,
  [sym_decimal_primitive] = sym_decimal_primitive,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_block_repeat1] = aux_sym_class_block_repeat1,
  [aux_sym_method_parameters_repeat1] = aux_sym_method_parameters_repeat1,
  [aux_sym_method_block_repeat1] = aux_sym_method_block_repeat1,
  [aux_sym_decimal_primitive_repeat1] = aux_sym_decimal_primitive_repeat1,
  [alias_sym_instance_variable] = alias_sym_instance_variable,
  [alias_sym_object] = alias_sym_object,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_primitive_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_null_primitive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decimal_primitive_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_decimal_floating_point_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_block] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_method_block] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_primitive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_primitive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_instance_variable] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_object] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_field = 2,
  field_left = 3,
  field_name = 4,
  field_object = 5,
  field_operand = 6,
  field_operator = 7,
  field_parameters = 8,
  field_right = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_field] = "field",
  [field_left] = "left",
  [field_name] = "name",
  [field_object] = "object",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_field, 2},
    {field_object, 0},
  [4] =
    {field_operand, 1},
    {field_operator, 0},
  [6] =
    {field_left, 0},
    {field_right, 2},
  [8] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_type_identifier,
  },
  [2] = {
    [0] = alias_sym_instance_variable,
  },
  [3] = {
    [0] = alias_sym_object,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_assignment, 2,
    sym_assignment,
    alias_sym_instance_variable,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '!', 92,
        '"', 93,
        '#', 110,
        '&', 8,
        '(', 64,
        ')', 66,
        '*', 88,
        '+', 84,
        ',', 65,
        '-', 86,
        '.', 67,
        '/', 90,
        ';', 74,
        '<', 76,
        '=', 69,
        '>', 75,
        'c', 25,
        'f', 20,
        'n', 38,
        't', 32,
        '{', 60,
        '|', 39,
        '}', 61,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '/') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 14,
        '"', 93,
        '#', 110,
        '&', 8,
        '(', 64,
        ')', 66,
        '*', 88,
        '+', 84,
        '-', 86,
        '.', 67,
        '/', 90,
        ';', 74,
        '<', 76,
        '=', 69,
        '>', 75,
        'f', 41,
        'n', 57,
        't', 53,
        '|', 39,
        '}', 61,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 14,
        '#', 110,
        '&', 8,
        ')', 66,
        '*', 87,
        '+', 83,
        '-', 85,
        '.', 67,
        '/', 89,
        ';', 74,
        '<', 76,
        '=', 18,
        '>', 75,
        '|', 39,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 91,
        '"', 93,
        '#', 110,
        '(', 64,
        '-', 85,
        '/', 9,
        'f', 42,
        'n', 57,
        't', 53,
        '}', 61,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == '|') ADVANCE(82);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_null_primitive);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_null_primitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_decimal_primitive_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_decimal_primitive_token1);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_decimal_floating_point_primitive);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_null_primitive] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_decimal_primitive_token1] = ACTIONS(1),
    [sym_decimal_floating_point_primitive] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(69),
    [sym__top_level] = STATE(47),
    [sym_class_declaration] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 7,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(9), 13,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [29] = 15,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_function,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_null_primitive,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(29), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(42), 1,
      sym_assignment,
    STATE(45), 1,
      sym_field_access,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_method_declaration,
      aux_sym_class_block_repeat1,
    STATE(68), 4,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [81] = 15,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_null_primitive,
    ACTIONS(51), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(54), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(42), 1,
      sym_assignment,
    STATE(45), 1,
      sym_field_access,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_method_declaration,
      aux_sym_class_block_repeat1,
    STATE(68), 4,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [133] = 15,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_function,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_null_primitive,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(29), 1,
      sym_decimal_floating_point_primitive,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(42), 1,
      sym_assignment,
    STATE(45), 1,
      sym_field_access,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_method_declaration,
      aux_sym_class_block_repeat1,
    STATE(68), 4,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [185] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(63), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 2,
      sym_identifier,
      sym_null_primitive,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(27), 2,
      sym_binary,
      sym_unary,
    STATE(22), 5,
      sym_field_access,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [228] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(67), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(65), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(35), 2,
      sym_binary,
      sym_unary,
    STATE(28), 5,
      sym_field_access,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [271] = 14,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      sym_null_primitive,
    ACTIONS(86), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(89), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(43), 1,
      sym_assignment,
    STATE(46), 1,
      sym_field_access,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_statement,
      aux_sym_method_block_repeat1,
    STATE(68), 4,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [320] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_null_primitive,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(29), 1,
      sym_decimal_floating_point_primitive,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(43), 1,
      sym_assignment,
    STATE(46), 1,
      sym_field_access,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_statement,
      aux_sym_method_block_repeat1,
    STATE(68), 4,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [369] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_null_primitive,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(29), 1,
      sym_decimal_floating_point_primitive,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(43), 1,
      sym_assignment,
    STATE(46), 1,
      sym_field_access,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_statement,
      aux_sym_method_block_repeat1,
    STATE(68), 4,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [418] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(100), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(98), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(33), 2,
      sym_binary,
      sym_unary,
    STATE(26), 5,
      sym_field_access,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [461] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(104), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(102), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(34), 2,
      sym_binary,
      sym_unary,
    STATE(23), 5,
      sym_field_access,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [504] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(108), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(106), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(29), 2,
      sym_binary,
      sym_unary,
    STATE(25), 5,
      sym_field_access,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [547] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(112), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(110), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(37), 2,
      sym_binary,
      sym_unary,
    STATE(32), 5,
      sym_field_access,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [590] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(116), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(114), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(36), 2,
      sym_binary,
      sym_unary,
    STATE(30), 5,
      sym_field_access,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [633] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(120), 1,
      sym_decimal_floating_point_primitive,
    STATE(18), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(118), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(31), 2,
      sym_binary,
      sym_unary,
    STATE(20), 5,
      sym_field_access,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [676] = 5,
    ACTIONS(126), 1,
      aux_sym_decimal_primitive_token1,
    STATE(17), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(122), 12,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [706] = 5,
    ACTIONS(133), 1,
      aux_sym_decimal_primitive_token1,
    STATE(17), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(129), 12,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [736] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(135), 12,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [760] = 4,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(139), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [786] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(145), 12,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [810] = 7,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(149), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [842] = 6,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 10,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [872] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(159), 12,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [896] = 8,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(165), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [930] = 4,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(149), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [956] = 6,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(149), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [985] = 9,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(165), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1020] = 7,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(165), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1051] = 9,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(165), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1086] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(139), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [1109] = 9,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(165), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1144] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(149), 11,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [1167] = 5,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 10,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1194] = 8,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(165), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1226] = 8,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(165), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1258] = 8,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(165), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1290] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_decimal_floating_point_primitive,
    ACTIONS(175), 6,
      sym_identifier,
      anon_sym_function,
      sym_null_primitive,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_primitive_token1,
  [1309] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_decimal_floating_point_primitive,
    ACTIONS(179), 6,
      sym_identifier,
      anon_sym_function,
      sym_null_primitive,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_primitive_token1,
  [1328] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_decimal_floating_point_primitive,
    ACTIONS(183), 6,
      sym_identifier,
      anon_sym_function,
      sym_null_primitive,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_primitive_token1,
  [1347] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_decimal_floating_point_primitive,
    ACTIONS(187), 6,
      sym_identifier,
      anon_sym_function,
      sym_null_primitive,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_primitive_token1,
  [1366] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_decimal_floating_point_primitive,
    ACTIONS(191), 6,
      sym_identifier,
      anon_sym_function,
      sym_null_primitive,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_primitive_token1,
  [1385] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_decimal_floating_point_primitive,
    ACTIONS(195), 5,
      sym_identifier,
      sym_null_primitive,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_primitive_token1,
  [1403] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 4,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_decimal_floating_point_primitive,
    ACTIONS(179), 5,
      sym_identifier,
      sym_null_primitive,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_primitive_token1,
  [1421] = 3,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1436] = 3,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(201), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1451] = 4,
    ACTIONS(7), 1,
      anon_sym_class,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(48), 3,
      sym__top_level,
      sym_class_declaration,
      aux_sym_source_file_repeat1,
  [1467] = 4,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      anon_sym_class,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(48), 3,
      sym__top_level,
      sym_class_declaration,
      aux_sym_source_file_repeat1,
  [1483] = 4,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_method_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1497] = 4,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_method_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1511] = 4,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_method_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1525] = 3,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_class_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1536] = 3,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_method_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1547] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [1556] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [1565] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [1574] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1583] = 3,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_method_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1594] = 3,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1605] = 2,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1613] = 2,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1621] = 2,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1629] = 2,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1637] = 2,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1645] = 2,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1653] = 2,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1661] = 2,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1669] = 2,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1677] = 2,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1685] = 2,
    ACTIONS(255), 1,
      aux_sym_string_primitive_token1,
    ACTIONS(257), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 271,
  [SMALL_STATE(9)] = 320,
  [SMALL_STATE(10)] = 369,
  [SMALL_STATE(11)] = 418,
  [SMALL_STATE(12)] = 461,
  [SMALL_STATE(13)] = 504,
  [SMALL_STATE(14)] = 547,
  [SMALL_STATE(15)] = 590,
  [SMALL_STATE(16)] = 633,
  [SMALL_STATE(17)] = 676,
  [SMALL_STATE(18)] = 706,
  [SMALL_STATE(19)] = 736,
  [SMALL_STATE(20)] = 760,
  [SMALL_STATE(21)] = 786,
  [SMALL_STATE(22)] = 810,
  [SMALL_STATE(23)] = 842,
  [SMALL_STATE(24)] = 872,
  [SMALL_STATE(25)] = 896,
  [SMALL_STATE(26)] = 930,
  [SMALL_STATE(27)] = 956,
  [SMALL_STATE(28)] = 985,
  [SMALL_STATE(29)] = 1020,
  [SMALL_STATE(30)] = 1051,
  [SMALL_STATE(31)] = 1086,
  [SMALL_STATE(32)] = 1109,
  [SMALL_STATE(33)] = 1144,
  [SMALL_STATE(34)] = 1167,
  [SMALL_STATE(35)] = 1194,
  [SMALL_STATE(36)] = 1226,
  [SMALL_STATE(37)] = 1258,
  [SMALL_STATE(38)] = 1290,
  [SMALL_STATE(39)] = 1309,
  [SMALL_STATE(40)] = 1328,
  [SMALL_STATE(41)] = 1347,
  [SMALL_STATE(42)] = 1366,
  [SMALL_STATE(43)] = 1385,
  [SMALL_STATE(44)] = 1403,
  [SMALL_STATE(45)] = 1421,
  [SMALL_STATE(46)] = 1436,
  [SMALL_STATE(47)] = 1451,
  [SMALL_STATE(48)] = 1467,
  [SMALL_STATE(49)] = 1483,
  [SMALL_STATE(50)] = 1497,
  [SMALL_STATE(51)] = 1511,
  [SMALL_STATE(52)] = 1525,
  [SMALL_STATE(53)] = 1536,
  [SMALL_STATE(54)] = 1547,
  [SMALL_STATE(55)] = 1556,
  [SMALL_STATE(56)] = 1565,
  [SMALL_STATE(57)] = 1574,
  [SMALL_STATE(58)] = 1583,
  [SMALL_STATE(59)] = 1594,
  [SMALL_STATE(60)] = 1605,
  [SMALL_STATE(61)] = 1613,
  [SMALL_STATE(62)] = 1621,
  [SMALL_STATE(63)] = 1629,
  [SMALL_STATE(64)] = 1637,
  [SMALL_STATE(65)] = 1645,
  [SMALL_STATE(66)] = 1653,
  [SMALL_STATE(67)] = 1661,
  [SMALL_STATE(68)] = 1669,
  [SMALL_STATE(69)] = 1677,
  [SMALL_STATE(70)] = 1685,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3, 0, 3),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3, 0, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_primitive, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_primitive, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, 0, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, 0, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_primitive, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_primitive, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, 0, 7),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, 0, 7),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_primitive, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_primitive, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_block, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_block, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_block, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_block, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4, 0, 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, 0, 6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_block_repeat1, 1, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 1, 0, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_parameters_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [253] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_aotcl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
