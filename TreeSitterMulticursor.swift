import XCTest
import SwiftTreeSitter
import TreeSitterHelix

final class TreeSitterHelixTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_multicursor())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Helix grammar")
    }
}
