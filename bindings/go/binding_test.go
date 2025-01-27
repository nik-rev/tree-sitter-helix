package tree_sitter_helix_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_helix "github.com/nik-rev/tree-sitter-helix/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_helix.Language())
	if language == nil {
		t.Errorf("Error loading Helix grammar")
	}
}
