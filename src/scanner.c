#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

enum TokenType {
    STRING_CONTENT,
};

void *tree_sitter_aotcl_external_scanner_create(void) {
    return NULL;
}

void tree_sitter_aotcl_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_aotcl_external_scanner_serialize(
  void *payload,
  char *buffer
) {
    return 0;
}

void tree_sitter_aotcl_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
}

bool tree_sitter_aotcl_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[STRING_CONTENT]) {
        while (lexer->lookahead != '"' && !lexer->eof(lexer)) {
            lexer->advance(lexer, false);
        }

        if (lexer->lookahead == '"') {
            lexer->result_symbol = STRING_CONTENT;
            lexer->advance(lexer, true);
            return true;
        }
    }
    return false;
}
