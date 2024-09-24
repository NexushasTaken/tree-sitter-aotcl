#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_class = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_function = 5,
  anon_sym_EQ = 6,
  anon_sym_SEMI = 7,
  sym_self = 8,
  anon_sym_DOT = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  sym_null_primitive = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_primitive_token1 = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  aux_sym_decimal_primitive_token1 = 18,
  anon_sym_POUND = 19,
  aux_sym_line_comment_token1 = 20,
  anon_sym_SLASH_STAR = 21,
  aux_sym_block_comment_token1 = 22,
  anon_sym_SLASH = 23,
  sym_source_file = 24,
  sym_class_specifier = 25,
  sym_class_body = 26,
  sym_method_declaration = 27,
  sym_member_assignment = 28,
  sym_assignment = 29,
  sym_member_expression = 30,
  sym_method_parameters = 31,
  sym_block = 32,
  sym_statement = 33,
  sym_primary_expression = 34,
  sym_string_primitive = 35,
  sym_bool_primitive = 36,
  sym_decimal_primitive = 37,
  sym_decimal_floating_point_primitive = 38,
  sym_line_comment = 39,
  sym_block_comment = 40,
  aux_sym_class_body_repeat1 = 41,
  aux_sym_method_parameters_repeat1 = 42,
  aux_sym_block_repeat1 = 43,
  aux_sym_decimal_primitive_repeat1 = 44,
  alias_sym_type_identifier = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_function] = "function",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [sym_self] = "self",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_null_primitive] = "null_primitive",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_primitive_token1] = "string_primitive_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_decimal_primitive_token1] = "decimal_primitive_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym_class_specifier] = "class_specifier",
  [sym_class_body] = "class_body",
  [sym_method_declaration] = "method_declaration",
  [sym_member_assignment] = "instance_variable",
  [sym_assignment] = "assignment",
  [sym_member_expression] = "member_expression",
  [sym_method_parameters] = "method_parameters",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_primary_expression] = "primary_expression",
  [sym_string_primitive] = "string_primitive",
  [sym_bool_primitive] = "bool_primitive",
  [sym_decimal_primitive] = "decimal_primitive",
  [sym_decimal_floating_point_primitive] = "decimal_floating_point_primitive",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_method_parameters_repeat1] = "method_parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_decimal_primitive_repeat1] = "decimal_primitive_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_self] = sym_self,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_null_primitive] = sym_null_primitive,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_primitive_token1] = aux_sym_string_primitive_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_decimal_primitive_token1] = aux_sym_decimal_primitive_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym_class_specifier] = sym_class_specifier,
  [sym_class_body] = sym_class_body,
  [sym_method_declaration] = sym_method_declaration,
  [sym_member_assignment] = sym_member_assignment,
  [sym_assignment] = sym_assignment,
  [sym_member_expression] = sym_member_expression,
  [sym_method_parameters] = sym_method_parameters,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_primary_expression] = sym_primary_expression,
  [sym_string_primitive] = sym_string_primitive,
  [sym_bool_primitive] = sym_bool_primitive,
  [sym_decimal_primitive] = sym_decimal_primitive,
  [sym_decimal_floating_point_primitive] = sym_decimal_floating_point_primitive,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_method_parameters_repeat1] = aux_sym_method_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_decimal_primitive_repeat1] = aux_sym_decimal_primitive_repeat1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_self] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
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
  [sym_null_primitive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_primitive_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_class_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_member_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_method_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
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
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_primitive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_left = 2,
  field_member = 3,
  field_name = 4,
  field_parameters = 5,
  field_right = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_left] = "left",
  [field_member] = "member",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_member, 0},
  [3] =
    {field_member, 1, .inherited = true},
  [4] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [6] =
    {field_left, 2},
    {field_right, 0},
  [8] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [14] = 14,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 72,
        '#', 81,
        '(', 67,
        ')', 69,
        ',', 68,
        '-', 34,
        '.', 66,
        '/', 93,
        ';', 63,
        '=', 62,
        'c', 19,
        'f', 12,
        'n', 33,
        's', 16,
        't', 27,
        '{', 58,
        '}', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 72,
        '#', 81,
        '-', 34,
        '/', 8,
        'f', 36,
        'n', 55,
        's', 40,
        't', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == '}') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '}') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(92);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(90);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_self);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_null_primitive);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_null_primitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '/') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_decimal_primitive_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 85},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {(TSStateId)(-1)},
  [62] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_self] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_null_primitive] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_decimal_primitive_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym_class_specifier] = STATE(58),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [anon_sym_class] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_self,
    ACTIONS(13), 1,
      sym_null_primitive,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym_member_expression,
      sym_primary_expression,
    STATE(47), 4,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
      sym_decimal_floating_point_primitive,
  [43] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym_self,
    ACTIONS(13), 1,
      sym_null_primitive,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(41), 2,
      sym_member_expression,
      sym_primary_expression,
    STATE(47), 4,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
      sym_decimal_floating_point_primitive,
  [86] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_statement,
    STATE(16), 1,
      sym_assignment,
    STATE(51), 1,
      sym_member_expression,
    ACTIONS(23), 2,
      sym_identifier,
      sym_self,
    STATE(4), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_block_repeat1,
  [114] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(15), 1,
      sym_statement,
    STATE(16), 1,
      sym_assignment,
    STATE(51), 1,
      sym_member_expression,
    ACTIONS(28), 2,
      sym_identifier,
      sym_self,
    STATE(5), 2,
      sym_line_comment,
      sym_block_comment,
  [144] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(15), 1,
      sym_statement,
    STATE(16), 1,
      sym_assignment,
    STATE(51), 1,
      sym_member_expression,
    ACTIONS(28), 2,
      sym_identifier,
      sym_self,
    STATE(6), 2,
      sym_line_comment,
      sym_block_comment,
  [174] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      anon_sym_function,
    STATE(8), 1,
      aux_sym_class_body_repeat1,
    STATE(7), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 2,
      sym_method_declaration,
      sym_member_assignment,
  [201] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_function,
    STATE(18), 2,
      sym_method_declaration,
      sym_member_assignment,
    STATE(8), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_class_body_repeat1,
  [226] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(34), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_function,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_class_body_repeat1,
    STATE(9), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 2,
      sym_method_declaration,
      sym_member_assignment,
  [253] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(50), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
    STATE(10), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_decimal_primitive_repeat1,
  [272] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
  [295] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_decimal_primitive_token1,
  [311] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 2,
      sym_identifier,
      anon_sym_function,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
  [329] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_method_parameters_repeat1,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
  [349] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 2,
      sym_identifier,
      sym_self,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
  [367] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 2,
      sym_identifier,
      sym_self,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
  [385] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 2,
      sym_identifier,
      anon_sym_function,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
  [403] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 2,
      sym_identifier,
      anon_sym_function,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
  [421] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
  [441] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym_self,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(28), 1,
      sym_member_expression,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
  [461] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 2,
      sym_identifier,
      sym_self,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
  [479] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 2,
      sym_identifier,
      anon_sym_function,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
  [497] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_method_parameters_repeat1,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
  [517] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
  [537] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(101), 2,
      anon_sym_EQ,
      anon_sym_SEMI,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
  [555] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(26), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_method_parameters_repeat1,
  [573] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 2,
      sym_identifier,
      anon_sym_function,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
  [591] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 2,
      anon_sym_EQ,
      anon_sym_SEMI,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
  [606] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
  [621] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
  [638] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
  [655] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_class_body,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
  [672] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
  [689] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(124), 1,
      anon_sym_EQ,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
  [706] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(126), 1,
      anon_sym_SEMI,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
  [723] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_method_parameters,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
  [740] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(37), 2,
      sym_line_comment,
      sym_block_comment,
  [754] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
  [768] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
  [782] = 4,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      aux_sym_line_comment_token1,
    ACTIONS(140), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
  [796] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
  [810] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
  [824] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
  [838] = 4,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      aux_sym_string_primitive_token1,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
  [852] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
  [866] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
  [880] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
  [894] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
  [908] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
  [922] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
  [936] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      anon_sym_EQ,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
  [950] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_EQ,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
  [964] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
  [978] = 4,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      aux_sym_block_comment_token1,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
  [992] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
  [1006] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(56), 2,
      sym_line_comment,
      sym_block_comment,
  [1020] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      anon_sym_SEMI,
    STATE(57), 2,
      sym_line_comment,
      sym_block_comment,
  [1034] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym_line_comment,
      sym_block_comment,
  [1048] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(59), 2,
      sym_line_comment,
      sym_block_comment,
  [1062] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(60), 2,
      sym_line_comment,
      sym_block_comment,
  [1076] = 1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [1080] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 253,
  [SMALL_STATE(11)] = 272,
  [SMALL_STATE(12)] = 295,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 329,
  [SMALL_STATE(15)] = 349,
  [SMALL_STATE(16)] = 367,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 403,
  [SMALL_STATE(19)] = 421,
  [SMALL_STATE(20)] = 441,
  [SMALL_STATE(21)] = 461,
  [SMALL_STATE(22)] = 479,
  [SMALL_STATE(23)] = 497,
  [SMALL_STATE(24)] = 517,
  [SMALL_STATE(25)] = 537,
  [SMALL_STATE(26)] = 555,
  [SMALL_STATE(27)] = 573,
  [SMALL_STATE(28)] = 591,
  [SMALL_STATE(29)] = 606,
  [SMALL_STATE(30)] = 621,
  [SMALL_STATE(31)] = 638,
  [SMALL_STATE(32)] = 655,
  [SMALL_STATE(33)] = 672,
  [SMALL_STATE(34)] = 689,
  [SMALL_STATE(35)] = 706,
  [SMALL_STATE(36)] = 723,
  [SMALL_STATE(37)] = 740,
  [SMALL_STATE(38)] = 754,
  [SMALL_STATE(39)] = 768,
  [SMALL_STATE(40)] = 782,
  [SMALL_STATE(41)] = 796,
  [SMALL_STATE(42)] = 810,
  [SMALL_STATE(43)] = 824,
  [SMALL_STATE(44)] = 838,
  [SMALL_STATE(45)] = 852,
  [SMALL_STATE(46)] = 866,
  [SMALL_STATE(47)] = 880,
  [SMALL_STATE(48)] = 894,
  [SMALL_STATE(49)] = 908,
  [SMALL_STATE(50)] = 922,
  [SMALL_STATE(51)] = 936,
  [SMALL_STATE(52)] = 950,
  [SMALL_STATE(53)] = 964,
  [SMALL_STATE(54)] = 978,
  [SMALL_STATE(55)] = 992,
  [SMALL_STATE(56)] = 1006,
  [SMALL_STATE(57)] = 1020,
  [SMALL_STATE(58)] = 1034,
  [SMALL_STATE(59)] = 1048,
  [SMALL_STATE(60)] = 1062,
  [SMALL_STATE(61)] = 1076,
  [SMALL_STATE(62)] = 1080,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 4), SHIFT_REPEAT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 4),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 4), SHIFT_REPEAT(38),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_primitive, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 1, 0, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 1, 0, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_floating_point_primitive, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_assignment, 4, 0, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_assignment, 4, 0, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_floating_point_primitive, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_parameters_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4, 0, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, 0, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_primitive, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_primitive, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3, 0, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_specifier, 3, 0, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
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
