<h1 align="center">tree-sitter-template🌴🪑?</h1>
<div align="center">

[![License](https://img.shields.io/github/license/adamazing/tree-sitter-template?label=License)](LICENSE "MIT")
[![Latest release)](https://img.shields.io/github/v/tag/adamazing/tree-sitter-template?logo=SemVer&include_prereleases&label=Release)](releases)
[![Main branch test status](https://img.shields.io/github/actions/workflow/status/adamazing/tree-sitter-template/test.yml?event=push&logo=githubactions&logoColor=rgb(255%2C255%2C255)&label=Build)](https://github.com/adamazing/tree-sitter-template/actions/workflows/test.yml?query=event%3Apush)

</div>

<!--toc:start-->
- [Intro](#intro)
  - [Getting started](#getting-started)
  - [More details about this template](#more-details-about-this-template)
    - [CI/Tests](#citests)
  - [Useful resources](#useful-resources)
  - [What even ***is*** tree-sitter?](#what-even-is-tree-sitter)
- [Goals](#goals)
- [Contributing / Feedback](#contributing-feedback)
- [Support](#support)
<!--toc:end-->

## Intro
This is a template that you can use to help you get started creating your first [tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar parser!

### Getting started 

This repository is a template. Click the button to create your own repo using this template and it will clone the structure and files into your new repo.

> **Note:**  
> The standard naming convention when creating a new tree-sitter grammar is to name the repository `tree-sitter-{language name}`.  
> 
> **E.g.** For Go, this is [tree-sitter-go](https://github.com/tree-sitter/tree-sitter-go).  

Once you have created your new repository, you can use your tool of choice to search and replace on the string: `tree-sitter-template` in order to name your new language grammar parser!
   

Check out the [Useful Resources](#useful-resources) section below to learn more about building your new grammar parser. There are also some helpful hints and links in the template itself. 

### More details about this template

#### CI/Tests
I have set up a basic Github Action Workflow that will attempt to generate a parser from the grammar.js file and then run tree-sitter's tests with `tree-sitter test`.

I have intentionally included a failing test ([test/corpus/failing.txt](./test/corpus/failing.txt))!
To get it passing (and make [test/corpus/hello.txt](./test/corpus/hello.txt) start failing), follow the instructions in [grammar.js](./grammar.js). Or, you know, you could just delete the failing test ;).  

Once you have tests passing, you may want to set up branch protection in your repo so that you don't accidentally ship a broken parser.

#### Goals

I want to make it as easy as possible for myself and others to quickly get started with all the boilerplate and some good pointers to get them on their way with the minimum of fuss. 

🙌   Minimal (Github Actions) CI for testing.  
🧚   The correct amount of example code:  
&nbsp;&nbsp;   👍  enough to help new people get started  
&nbsp;&nbsp;   👎  not so much as to get in the way of people who know what they're doing  

#### Contributing / Feedback

💡 Open to ideas! [Create an issue!](../issues)

#### Support

If you've found this useful, please consider:  
   - 🌟 starring the repo  
   - 💲 [sponsoring](https://github.com/sponsors/adamazing) me  
   - ⚧️  supporting [OutLine](https://outline.org.nz/donate)  
   - ✍️ following me on [Medium](https://medium.com/@adamhenley)
   
   
---

### Useful resources

[Tree-sitter's own documentation](http://tree-sitter.github.io/tree-sitter/creating-parsers) on creating parsers is a great resource.
You can follow the "[Creating Parsers](http://tree-sitter.github.io/tree-sitter/creating-parsers)" section and have a very good understanding of the basics.

When you are ready to start looking at how to leverage your new parser, syntax highlighting is a good first step. 
Tree-sitter's own documentation on [Syntax highlighting](http://tree-sitter.github.io/tree-sitter/syntax-highlighting) will take you through the anatomy of a tree-sitter package.json file and how to get started.

### What even ***is*** tree-sitter?

> *Tree-sitter is a parser generator tool and an incremental parsing library. It can build a concrete syntax tree for a source file and efficiently update the syntax tree as the source file is edited.*

[Max Brunsfeld's Strange Loop 2018 Conference Presentation](https://www.youtube.com/watch?v=Jes3bD6P0To) is a great introduction to what tree-sitter is and what it can do.

Features of tree-sitter:
 - Uniform parsing of languages  
   - Builds an Abstract Syntax Tree (AST) of the given code  
   - AST allows arbitrary analysis  
   - Allows intelligent syntax-aware folding
 - Incremental parsing  
   - Doesn't have to completely re-parse all the code just because one part has changed  
   - Blazingly fast, in-process incremental parsing
 - Error recovery  
   - An error in one part of your code doesn't mean the whole of the code is bad.  
 
