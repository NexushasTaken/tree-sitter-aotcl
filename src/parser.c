#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 2
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_class = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_function = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_EQ = 9,
  anon_sym_PLUS_EQ = 10,
  anon_sym_DASH_EQ = 11,
  anon_sym_STAR_EQ = 12,
  anon_sym_SLASH_EQ = 13,
  anon_sym_SEMI = 14,
  anon_sym_GT = 15,
  anon_sym_LT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_AMP_AMP = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_BANG = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_primitive_token1 = 29,
  sym_null_primitive = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  aux_sym_decimal_primitive_token1 = 33,
  sym_decimal_floating_point_primitive = 34,
  sym_line_comment = 35,
  sym_block_comment = 36,
  sym_source_file = 37,
  sym__top_level = 38,
  sym_class_declaration = 39,
  sym_class_block = 40,
  sym_method_declaration = 41,
  sym_method_parameters = 42,
  sym_method_block = 43,
  sym_assignment = 44,
  sym_statement = 45,
  sym_binary = 46,
  sym_unary = 47,
  sym_parenthesized_expression = 48,
  sym_string_primitive = 49,
  sym_bool_primitive = 50,
  sym_decimal_primitive = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_class_block_repeat1 = 53,
  aux_sym_method_parameters_repeat1 = 54,
  aux_sym_method_block_repeat1 = 55,
  aux_sym_decimal_primitive_repeat1 = 56,
  alias_sym_instance_variable = 57,
  alias_sym_type_identifier = 58,
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
  [sym_assignment] = "assignment",
  [sym_statement] = "statement",
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
  [sym_assignment] = sym_assignment,
  [sym_statement] = sym_statement,
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
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
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_left = 2,
  field_name = 3,
  field_operand = 4,
  field_operator = 5,
  field_parameters = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_left, 0},
    {field_right, 2},
  [4] =
    {field_operand, 1},
    {field_operator, 0},
  [6] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [9] =
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
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 35,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '!', 90,
        '"', 91,
        '#', 108,
        '&', 7,
        '(', 63,
        ')', 65,
        '*', 86,
        '+', 82,
        ',', 64,
        '-', 84,
        '/', 88,
        ';', 72,
        '<', 74,
        '=', 67,
        '>', 73,
        'c', 24,
        'f', 19,
        'n', 37,
        't', 31,
        '{', 59,
        '|', 38,
        '}', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 89,
        '"', 91,
        '#', 108,
        '(', 63,
        '-', 83,
        '/', 8,
        'f', 40,
        'n', 56,
        't', 51,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 13,
        '#', 108,
        '&', 7,
        ')', 65,
        '*', 85,
        '+', 81,
        '-', 83,
        '/', 87,
        ';', 72,
        '<', 74,
        '=', 17,
        '>', 73,
        'f', 55,
        '|', 38,
        '}', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 108,
        ')', 65,
        '*', 14,
        '+', 15,
        '-', 16,
        '/', 9,
        '=', 66,
        '}', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(79);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == '|') ADVANCE(80);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_null_primitive);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_null_primitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_decimal_primitive_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_decimal_primitive_token1);
      if (lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_decimal_floating_point_primitive);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 110:
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
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
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
    [sym_source_file] = STATE(59),
    [sym__top_level] = STATE(26),
    [sym_class_declaration] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(21), 1,
      sym_decimal_floating_point_primitive,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      sym_identifier,
      sym_null_primitive,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 6,
      sym_binary,
      sym_unary,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [40] = 10,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(25), 1,
      sym_decimal_floating_point_primitive,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(22), 6,
      sym_binary,
      sym_unary,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [80] = 10,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(29), 1,
      sym_decimal_floating_point_primitive,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(13), 6,
      sym_binary,
      sym_unary,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [120] = 10,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(33), 1,
      sym_decimal_floating_point_primitive,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(14), 6,
      sym_binary,
      sym_unary,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [160] = 10,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(37), 1,
      sym_decimal_floating_point_primitive,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(15), 6,
      sym_binary,
      sym_unary,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [200] = 10,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(41), 1,
      sym_decimal_floating_point_primitive,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(20), 6,
      sym_binary,
      sym_unary,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [240] = 10,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(45), 1,
      sym_decimal_floating_point_primitive,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(16), 6,
      sym_binary,
      sym_unary,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [280] = 10,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(49), 1,
      sym_decimal_floating_point_primitive,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      sym_identifier,
      sym_null_primitive,
    STATE(21), 6,
      sym_binary,
      sym_unary,
      sym_parenthesized_expression,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
  [320] = 5,
    ACTIONS(55), 1,
      aux_sym_decimal_primitive_token1,
    STATE(10), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(51), 11,
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
  [349] = 5,
    ACTIONS(62), 1,
      aux_sym_decimal_primitive_token1,
    STATE(10), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(60), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(58), 11,
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
  [378] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(64), 11,
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
  [401] = 5,
    ACTIONS(68), 1,
      anon_sym_STAR,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(64), 10,
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
  [428] = 7,
    ACTIONS(68), 1,
      anon_sym_STAR,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(76), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(64), 4,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(74), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [459] = 6,
    ACTIONS(68), 1,
      anon_sym_STAR,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(76), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(64), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [488] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(80), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(78), 11,
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
  [511] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(84), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(82), 11,
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
  [534] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(88), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(86), 11,
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
  [557] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(92), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(90), 11,
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
  [580] = 8,
    ACTIONS(68), 1,
      anon_sym_STAR,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(76), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(96), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(74), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [612] = 8,
    ACTIONS(68), 1,
      anon_sym_STAR,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(76), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(96), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(74), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [644] = 8,
    ACTIONS(68), 1,
      anon_sym_STAR,
    ACTIONS(70), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(76), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(96), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(74), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [676] = 6,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      anon_sym_function,
    STATE(36), 1,
      sym_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(23), 2,
      sym_method_declaration,
      aux_sym_class_block_repeat1,
  [697] = 6,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 1,
      anon_sym_function,
    STATE(36), 1,
      sym_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(23), 2,
      sym_method_declaration,
      aux_sym_class_block_repeat1,
  [718] = 6,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_function,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(24), 2,
      sym_method_declaration,
      aux_sym_class_block_repeat1,
  [739] = 4,
    ACTIONS(7), 1,
      anon_sym_class,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 3,
      sym__top_level,
      sym_class_declaration,
      aux_sym_source_file_repeat1,
  [755] = 5,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 2,
      sym_statement,
      aux_sym_method_block_repeat1,
  [773] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [785] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [797] = 5,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(27), 2,
      sym_statement,
      aux_sym_method_block_repeat1,
  [815] = 5,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 2,
      sym_statement,
      aux_sym_method_block_repeat1,
  [833] = 4,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      anon_sym_class,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 3,
      sym__top_level,
      sym_class_declaration,
      aux_sym_source_file_repeat1,
  [849] = 3,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 2,
      sym_identifier,
      anon_sym_function,
  [861] = 4,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_method_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [875] = 3,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 2,
      sym_identifier,
      anon_sym_function,
  [887] = 3,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 2,
      sym_identifier,
      anon_sym_function,
  [899] = 4,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_method_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [913] = 3,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 2,
      sym_identifier,
      anon_sym_function,
  [925] = 4,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_method_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [939] = 3,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 2,
      sym_identifier,
      anon_sym_function,
  [951] = 3,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_method_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [962] = 3,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_method_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [973] = 3,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [984] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [993] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1002] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [1011] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [1020] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(150), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1029] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [1038] = 3,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_class_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1049] = 2,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1057] = 2,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1065] = 2,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1073] = 2,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1081] = 2,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1089] = 2,
    ACTIONS(199), 1,
      aux_sym_string_primitive_token1,
    ACTIONS(201), 2,
      sym_line_comment,
      sym_block_comment,
  [1097] = 2,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1105] = 2,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1113] = 2,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 200,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 280,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 378,
  [SMALL_STATE(13)] = 401,
  [SMALL_STATE(14)] = 428,
  [SMALL_STATE(15)] = 459,
  [SMALL_STATE(16)] = 488,
  [SMALL_STATE(17)] = 511,
  [SMALL_STATE(18)] = 534,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 580,
  [SMALL_STATE(21)] = 612,
  [SMALL_STATE(22)] = 644,
  [SMALL_STATE(23)] = 676,
  [SMALL_STATE(24)] = 697,
  [SMALL_STATE(25)] = 718,
  [SMALL_STATE(26)] = 739,
  [SMALL_STATE(27)] = 755,
  [SMALL_STATE(28)] = 773,
  [SMALL_STATE(29)] = 785,
  [SMALL_STATE(30)] = 797,
  [SMALL_STATE(31)] = 815,
  [SMALL_STATE(32)] = 833,
  [SMALL_STATE(33)] = 849,
  [SMALL_STATE(34)] = 861,
  [SMALL_STATE(35)] = 875,
  [SMALL_STATE(36)] = 887,
  [SMALL_STATE(37)] = 899,
  [SMALL_STATE(38)] = 913,
  [SMALL_STATE(39)] = 925,
  [SMALL_STATE(40)] = 939,
  [SMALL_STATE(41)] = 951,
  [SMALL_STATE(42)] = 962,
  [SMALL_STATE(43)] = 973,
  [SMALL_STATE(44)] = 984,
  [SMALL_STATE(45)] = 993,
  [SMALL_STATE(46)] = 1002,
  [SMALL_STATE(47)] = 1011,
  [SMALL_STATE(48)] = 1020,
  [SMALL_STATE(49)] = 1029,
  [SMALL_STATE(50)] = 1038,
  [SMALL_STATE(51)] = 1049,
  [SMALL_STATE(52)] = 1057,
  [SMALL_STATE(53)] = 1065,
  [SMALL_STATE(54)] = 1073,
  [SMALL_STATE(55)] = 1081,
  [SMALL_STATE(56)] = 1089,
  [SMALL_STATE(57)] = 1097,
  [SMALL_STATE(58)] = 1105,
  [SMALL_STATE(59)] = 1113,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_primitive, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_primitive, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, 0, 6),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, 0, 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, 0, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, 0, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_primitive, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_primitive, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_primitive, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_primitive, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_block_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_block, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_block, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_block_repeat1, 1, 0, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 1, 0, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_parameters_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_block, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_block, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4, 0, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, 0, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
