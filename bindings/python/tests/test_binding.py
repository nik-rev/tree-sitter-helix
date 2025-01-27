from unittest import TestCase

import tree_sitter, tree_sitter_helix


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_helix.language())
        except Exception:
            self.fail("Error loading Helix grammar")
