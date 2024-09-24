#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 1
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_class = 1,
  sym_identifier = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_function = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  sym_null_primitive = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_primitive_token1 = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  aux_sym_decimal_primitive_token1 = 14,
  anon_sym_DOT = 15,
  anon_sym_EQ = 16,
  anon_sym_SEMI = 17,
  anon_sym_POUND = 18,
  aux_sym_line_comment_token1 = 19,
  anon_sym_SLASH_STAR = 20,
  aux_sym_block_comment_token1 = 21,
  anon_sym_SLASH = 22,
  sym_source_file = 23,
  sym_class_specifier = 24,
  sym_class_body = 25,
  sym_method_declaration = 26,
  sym_method_parameters = 27,
  sym_method_block = 28,
  sym_string_primitive = 29,
  sym_bool_primitive = 30,
  sym_decimal_primitive = 31,
  sym_decimal_floating_point_primitive = 32,
  sym_variable_declaration = 33,
  sym_line_comment = 34,
  sym_block_comment = 35,
  aux_sym_class_body_repeat1 = 36,
  aux_sym_method_parameters_repeat1 = 37,
  aux_sym_decimal_primitive_repeat1 = 38,
  alias_sym_type_identifier = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_null_primitive] = "null_primitive",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_primitive_token1] = "string_primitive_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_decimal_primitive_token1] = "decimal_primitive_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym_class_specifier] = "class_specifier",
  [sym_class_body] = "class_body",
  [sym_method_declaration] = "method_declaration",
  [sym_method_parameters] = "method_parameters",
  [sym_method_block] = "method_block",
  [sym_string_primitive] = "string_primitive",
  [sym_bool_primitive] = "bool_primitive",
  [sym_decimal_primitive] = "decimal_primitive",
  [sym_decimal_floating_point_primitive] = "decimal_floating_point_primitive",
  [sym_variable_declaration] = "class_variable",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_method_parameters_repeat1] = "method_parameters_repeat1",
  [aux_sym_decimal_primitive_repeat1] = "decimal_primitive_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_null_primitive] = sym_null_primitive,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_primitive_token1] = aux_sym_string_primitive_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_decimal_primitive_token1] = aux_sym_decimal_primitive_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym_class_specifier] = sym_class_specifier,
  [sym_class_body] = sym_class_body,
  [sym_method_declaration] = sym_method_declaration,
  [sym_method_parameters] = sym_method_parameters,
  [sym_method_block] = sym_method_block,
  [sym_string_primitive] = sym_string_primitive,
  [sym_bool_primitive] = sym_bool_primitive,
  [sym_decimal_primitive] = sym_decimal_primitive,
  [sym_decimal_floating_point_primitive] = sym_decimal_floating_point_primitive,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_method_parameters_repeat1] = aux_sym_method_parameters_repeat1,
  [aux_sym_decimal_primitive_repeat1] = aux_sym_decimal_primitive_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DOT] = {
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
  [sym_method_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_method_block] = {
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
  [sym_variable_declaration] = {
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
  field_declarator = 2,
  field_name = 3,
  field_parameters = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_declarator] = "declarator",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_value] = "value",
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
    {field_declarator, 0},
  [3] =
    {field_declarator, 1, .inherited = true},
  [4] =
    {field_declarator, 0, .inherited = true},
    {field_declarator, 1, .inherited = true},
  [6] =
    {field_name, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '"', 48,
        '#', 58,
        '(', 44,
        ')', 46,
        ',', 45,
        '-', 29,
        '.', 55,
        '/', 70,
        ';', 57,
        '=', 56,
        'c', 15,
        'f', 10,
        'n', 28,
        't', 22,
        '{', 40,
        '}', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '/') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == '}') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '/') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(67);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_null_primitive);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '/') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_primitive_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_decimal_primitive_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {(TSStateId)(-1)},
  [46] = {(TSStateId)(-1)},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_null_primitive] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_decimal_primitive_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym_class_specifier] = STATE(42),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [anon_sym_class] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_null_primitive,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_decimal_primitive_token1,
    STATE(7), 1,
      aux_sym_decimal_primitive_repeat1,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(34), 4,
      sym_string_primitive,
      sym_bool_primitive,
      sym_decimal_primitive,
      sym_decimal_floating_point_primitive,
  [33] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_function,
    STATE(16), 1,
      sym_method_declaration,
    STATE(17), 1,
      sym_variable_declaration,
    STATE(3), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_class_body_repeat1,
  [60] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_function,
    STATE(5), 1,
      aux_sym_class_body_repeat1,
    STATE(16), 1,
      sym_method_declaration,
    STATE(17), 1,
      sym_variable_declaration,
    STATE(4), 2,
      sym_line_comment,
      sym_block_comment,
  [89] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_function,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_class_body_repeat1,
    STATE(16), 1,
      sym_method_declaration,
    STATE(17), 1,
      sym_variable_declaration,
    STATE(5), 2,
      sym_line_comment,
      sym_block_comment,
  [118] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(36), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
    STATE(6), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_decimal_primitive_repeat1,
  [137] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(38), 1,
      anon_sym_DOT,
    ACTIONS(40), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(7), 2,
      sym_line_comment,
      sym_block_comment,
  [160] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(42), 3,
      aux_sym_decimal_primitive_token1,
      anon_sym_DOT,
      anon_sym_SEMI,
  [176] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(9), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_method_parameters_repeat1,
  [194] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 2,
      sym_identifier,
      anon_sym_function,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
  [212] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_method_parameters_repeat1,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
  [232] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
  [252] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 2,
      sym_identifier,
      anon_sym_function,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
  [270] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_method_parameters_repeat1,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
  [290] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_decimal_primitive_token1,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      aux_sym_decimal_primitive_repeat1,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
  [310] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 2,
      sym_identifier,
      anon_sym_function,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
  [328] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 2,
      sym_identifier,
      anon_sym_function,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
  [346] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 2,
      sym_identifier,
      anon_sym_function,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
  [364] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(47), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
  [379] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_class_body,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
  [396] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_method_parameters,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
  [413] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_method_block,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
  [430] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
  [447] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
  [461] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
  [475] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
  [489] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
  [503] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
  [517] = 4,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      aux_sym_block_comment_token1,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
  [531] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
  [545] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
  [559] = 4,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      aux_sym_line_comment_token1,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
  [573] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
  [587] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
  [601] = 4,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      aux_sym_string_primitive_token1,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
  [615] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
  [629] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_EQ,
    STATE(37), 2,
      sym_line_comment,
      sym_block_comment,
  [643] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
  [657] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
  [671] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
  [685] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
  [699] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
  [713] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
  [727] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
  [741] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [745] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 212,
  [SMALL_STATE(12)] = 232,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 270,
  [SMALL_STATE(15)] = 290,
  [SMALL_STATE(16)] = 310,
  [SMALL_STATE(17)] = 328,
  [SMALL_STATE(18)] = 346,
  [SMALL_STATE(19)] = 364,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 396,
  [SMALL_STATE(22)] = 413,
  [SMALL_STATE(23)] = 430,
  [SMALL_STATE(24)] = 447,
  [SMALL_STATE(25)] = 461,
  [SMALL_STATE(26)] = 475,
  [SMALL_STATE(27)] = 489,
  [SMALL_STATE(28)] = 503,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 531,
  [SMALL_STATE(31)] = 545,
  [SMALL_STATE(32)] = 559,
  [SMALL_STATE(33)] = 573,
  [SMALL_STATE(34)] = 587,
  [SMALL_STATE(35)] = 601,
  [SMALL_STATE(36)] = 615,
  [SMALL_STATE(37)] = 629,
  [SMALL_STATE(38)] = 643,
  [SMALL_STATE(39)] = 657,
  [SMALL_STATE(40)] = 671,
  [SMALL_STATE(41)] = 685,
  [SMALL_STATE(42)] = 699,
  [SMALL_STATE(43)] = 713,
  [SMALL_STATE(44)] = 727,
  [SMALL_STATE(45)] = 741,
  [SMALL_STATE(46)] = 745,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 4), SHIFT_REPEAT(37),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 4),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 4), SHIFT_REPEAT(33),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_primitive, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_primitive_repeat1, 1, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_parameters_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_block, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_block, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_floating_point_primitive, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4, 0, 6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, 0, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_floating_point_primitive, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 1, 0, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 1, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_primitive, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3, 0, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_primitive, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_specifier, 3, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_parameters, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
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
