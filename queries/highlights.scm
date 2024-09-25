[
  "="
  "+="
  "-="
  "*="
  "/="
  "||"
  "&&"
  "=="
  "!="
  "<"
  "<="
  ">"
  ">="
  "+"
  "-"
  "*"
  "/"
  "-"
  "!"
] @operator
[
  ";"
  "."
  ","
] @punctuation.delimiter

"self" @variable.builtin

[
  "function"
  "if"
  "elif"
  "else"
  "for"
  "while"
] @keyword

"class" @keyword.type

"in" @operator

"return" @keyword.return
"wait" @keyword.coroutine

(
  class_declaration
  name: (identifier) @type
)
(
  field_access
  object: (object) @type
  field: (identifier) @variable.member
)

(
  procedure_call
  method: (
      field_access
      field: (identifier) @function.method.call
    )
)

; primitives
(string_primitive) @string
(null_primitive) @constant.builtin
[
  "true"
  "false"
] @boolean

(decimal_primitive) @number
(decimal_floating_point_primitive) @number.float

[
  (line_comment)
  (block_comment)
] @comment

(
  procedure_declaration
  name: (identifier) @function.method
)

(
  instance_variable
  left: (identifier) @variable.member
)

(
  procedure_declaration
  parameters: (
      parameters
      (identifier) @variable.parameter
    )
)
(
  assignment
  left: (identifier) @variable
)

[
  "("
  ")"
  "{"
  "}"
]  @punctuation.bracket
