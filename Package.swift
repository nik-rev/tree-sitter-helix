// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterHelix",
    products: [
        .library(name: "TreeSitterHelix", targets: ["TreeSitterHelix"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterHelix",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterHelixTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterHelix",
            ],
            path: "bindings/swift/TreeSitterHelixTests"
        )
    ],
    cLanguageStandard: .c11
)
