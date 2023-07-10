; highlights.scm

"func" @keyword
"return" @keyword.control
"begin" @keyword
"end" @keyword
(number) @constant.numeric
(string) @string
(function_definition
  name: (identifier) @entity.name.function
  parameters: (_) @variable.parameter) @meta.function
(comment) @comment
(comment_line) @comment.line.double-slash
(parameter) @variable.parameter

