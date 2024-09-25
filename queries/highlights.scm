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
";" @delimiter

;(self) @variable.builtin

[
  "class"
  "function"
] @keyword
(type_identifier) @type

; primitives
(string_primitive) @string
(null_primitive) @constant.builtin
(bool_primitive) @type.builtin

(decimal_primitive) @number
(decimal_floating_point_primitive) @number.float

[
  (line_comment)
  (block_comment)
] @comment

(
  function_declaration
  name: (identifier) @function
)

(
  instance_variable
  right: (identifier) @variable.member
)

(
  function_parameters
  (identifier) @variable.parameter
)
