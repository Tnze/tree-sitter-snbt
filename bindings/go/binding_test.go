package tree_sitter_snbt_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-snbt"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_snbt.Language())
	if language == nil {
		t.Errorf("Error loading Snbt grammar")
	}
}
