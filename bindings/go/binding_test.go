package tree_sitter_multicursor_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_multicursor "github.com/nik-rev/tree-sitter-multicursor/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_multicursor.Language())
	if language == nil {
		t.Errorf("Error loading Helix grammar")
	}
}
