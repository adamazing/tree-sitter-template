// This is where you define your language's grammar parser.
// For more information on getting started creating a tree-sitter parser, see the official tree-sitter documentation:
//  http://tree-sitter.github.io/tree-sitter/creating-parsers
//

module.exports = grammar({
  name: 'template',  // This should be your language name, e.g. Go's is "go", HTML's is "html"

  rules: {
    // TODO: This is where you add the rules for your language's grammar.

    // Per the official treesitter documentation, you can test you have everything you need by running the
    // following commands in your terminal from within this file's directory:
    //      tree-sitter generate
    //      echo 'hello' > example-file
    //      tree-sitter parse example-file
    source_file: $ => 'hello',

    // You should see the following output in the terminal:
    //    (source_file [0, 0] - [1, 0])
    //
    // If you don't or there was an error when running `tree-sitter generate` or `tree-sitter parse`, consult
    // the official documentation for more information.


    /*
    *  This file is just javascript code so you can do whatever you want in here that will make your grammar
    *  easier to define/understand by a human being, or a developer.
    *
    *  Tree-sitter will compile your grammar definition when you run `tree-sitter generate` and generate
    *  bindings for node/WASM and Rust.
    **/


    /*
    *  The code below, if uncommented, will allow the default failing `failing` test to pass.
    *  After uncommenting the code below, be sure to run `tree-sitter generate` before re-running `tree-sitter test`.
    *
    *  Until you remove the 'hello.txt' in the `./test/corpus/` directory, that test will now fail.
    *
    **/
    // Uncomment everything below this line

    // source_file: $ => repeat($._definition),
    //
    // _definition: $ => choice(
    //   $.function_definition
    //   // TODO: More definitions
    // ),
    //
    // function_definition: $ => seq(
    //   "func",
    //   $.identifier,
    //   $.parameter_list,
    //   $.block
    // ),
    //
    // parameter_list: $ => seq(
    //   "(",
    //   optional(seq($.identifier,repeat(seq(",",$.identifier)))),
    //   ")"
    // ),
    //
    // block: $ => seq(
    //   "begin",
    //   optional($._statement_list),
    //   "end"
    // ),
    //
    // _statement_list: $ => choice(
    //   seq($._statement)
    // ),
    //
    // _statement: $ => choice(
    //   $.return_statement
    //   // TODO: implement some other types of statements here
    // ),
    //
    // return_statement: $ => seq(
    //   "return",
    //   choice($.identifier, $._literal),
    //   ";"
    // ),
    //
    // _literal: $ => choice(
    //   $.number,
    //   $.string
    //   // TODO: implement some other types of literals here
    // ),
    //
    // string: $ => choice(
    //   seq("'", /[^']*/, "'"),
    //   seq('"', /[^"]*/, '"')
    // ),
    //
    // number: $ => choice(
    //   /\d+/
    // ),
    //
    // identifier: $ => /[a-zA-Z][a-zA-Z0-9]+/

    // Stop uncommenting here.
  }
});
