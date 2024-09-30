[
  (class_specifier
    name: (identifier))
  (extension_specifier
    name: (identifier))
  (cutscene_specifier
    name: (identifier))
  (component_specifier
    name: (identifier))
] @type

(instance_variable
  left: (identifier) @variable.member)

(assignment
  left: (identifier) @variable)

; field_access
(field_access
  object: (object) @type)
  (#match? @type "^[A-Z]")
(field_access
  object: (object) @variable
  (#match? @variable "^[a-z]"))
(field_access
  field: (identifier) @variable.member)


; procedure
(procedure_call
  procedure: (field_access field: (identifier) @function.method.call))
(procedure_call
  procedure: (identifier) @function.builtin)

(procedure_declaration
  name: (identifier) @function.method)
(parameters (identifier) @variable.parameter)


; primitives
(string_primitive) @string
(null_primitive) @constant.builtin

(decimal_primitive) @number
(decimal_floating_point_primitive) @number.float

[
  (line_comment)
  (block_comment)
] @comment

(self) @variable.builtin
"function" @keyword.function
"return" @keyword.return

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
  "in"
] @operator

[
  ";"
  "."
  ","
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  "coroutine"
  "wait"
] @keyword.coroutine

[
  "if"
  "elif"
  "else"
] @keyword.conditional

[
  "for"
  "while"
] @keyword.repeat

[
  "class"
  "extension"
  "cutscene"
  "component"
] @keyword.type

[
  "true"
  "false"
] @boolean
