// This is where you define your language's grammar parser.
// For more information on getting started creating a tree-sitter parser, see the official tree-sitter documentation:
//  http://tree-sitter.github.io/tree-sitter/creating-parsers
//

module.exports = grammar({
  name: 'template',  // This should be your language name, e.g. Go's is "go", HTML's is "html"

  rules: {
    // TODO: This is where you add the rules for your language's grammar.

    /*
    *  This file is just javascript code so you can do whatever you want in here that will make your grammar
    *  easier to define/understand by a human being, or a developer.
    *
    *  Tree-sitter will compile your grammar definition when you run `tree-sitter generate` and generate
    *  bindings for node/WASM and Rust.
    **/

    /*
    *  The code below defines a pseudo language I came up with sharing some syntactical properties with other languages.
    *
    *  Run `tree-sitter generate` before re-running `tree-sitter test`.
    *
    **/

    source_file: $ => repeat(
      choice($.comment, $._definition)
    ),

    _definition: $ => choice(
      $.function_definition
      // TODO: More definitions
    ),

    function_definition: $ => seq(
      "func",
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('body', $.block)
    ),

    parameter_list: $ => seq(
      "(",
      optional(
        seq(
          alias($.identifier,$.parameter),
          repeat(
            seq(
              ",",
              alias($.identifier, $.parameter)
            )))
      ),
      ")"
    ),

    block: $ => seq(
      "begin",
      optional($._statement_list),
      "end"
    ),

    _statement_list: $ => repeat1(
      choice(
        $._statement,
        $.comment
      )
    ),

    _statement: $ => choice(
      $.return_statement
      // TODO: implement some other types of statements here
    ),

    return_statement: $ => seq(
      "return",
      choice($.identifier, $._literal),
      ";"
    ),

    _literal: $ => choice(
      $.number,
      $.string
      // TODO: implement some other types of literals here
    ),

    string: $ => choice(
      seq("'", /[^']*/, "'"),
      seq('"', /[^"]*/, '"')
    ),

    number: $ => /\d+/,

    identifier: $ => /[a-zA-Z][a-zA-Z0-9]+/,

    comment: $ => choice(
      $.comment_line
    ),

    comment_line: $ => seq(
      "//",
      field('comment_text', /.*/)
    )

  }
});
