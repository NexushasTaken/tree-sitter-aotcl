package tree_sitter_aotcl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_aotcl "github.com/tree-sitter/tree-sitter-aotcl/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_aotcl.Language())
	if language == nil {
		t.Errorf("Error loading Aotcl grammar")
	}
}
