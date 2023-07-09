# Tree-sitter tests

## Layout

This is an example test directory layout for a tree-sitter project:

```
test
├── corpus
│   ├── basics.txt
│   └── core_template_constructs.txt
└── highlight
    └── simple_output_directives.liquid
```

Tests for your grammar live in the [`test/corpus/`](./test/corpus/) directory.  
Tests for the highlight queries provided by your project live in the [`test/highlight/`](./test/highlight/) directory.

## Testing

For the most up-to-date and authoritative information on testing, look to the official Tree-sitter docs. 

For testing your grammar, the section on the [`tree-sitter test` command](http://tree-sitter.github.io/tree-sitter/creating-parsers#command-test) will help you the most.
For testing your highlight queries, the section on [Unit Testing syntax highlighting queries](http://tree-sitter.github.io/tree-sitter/syntax-highlighting#unit-testing) will be of most use.


### Introduction to tree-sitter grammar tests

The `tree-sitter test` command will automatically run any tests that are found in the `corpus/` or `test/corpus/` directories within the root directory of the parser.

How you choose to break up your tests is entirely up to you, but you should probably try and keep like-tests together, e.g. all your "keyword" tests should probably live in the same, `keywords.txt` test file.
