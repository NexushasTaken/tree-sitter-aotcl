package tree_sitter_aotcl_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-aotcl"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_aotcl.Language())
	if language == nil {
		t.Errorf("Error loading Aotcl grammar")
	}
}
