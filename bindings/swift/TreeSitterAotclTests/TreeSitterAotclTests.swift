import XCTest
import SwiftTreeSitter
import TreeSitterAotcl

final class TreeSitterAotclTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_aotcl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Aotcl grammar")
    }
}
