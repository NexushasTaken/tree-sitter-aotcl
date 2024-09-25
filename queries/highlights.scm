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

"function" @keyword.function

[
  "class"
  "extension"
  "cutscene"
  "component"
] @keyword.type

"in" @operator

"return" @keyword.return

(
  class_declaration
  name: (identifier) @type
)

(
  field_access
  object: (object) @variable
  field: (identifier) @variable.member
)

; Objects
(
  (field_access object: (object) @type.builtin)
  (#match? @type.builtin
   "^(Component|Object|Character|Human|Titan|Shifter|MapObject|Transform|Player|NetworkView|Color|Vector3|Quaternion|Dict|List|Range|LineCastHitResult|Random|Game|Network|Map|UI|Time|Convert|String|Input|Math|Random|Cutscene|Camera|RoomData|PersistentData|Json|Physics)$")
)
; Static Classes
(
  (field_access object: (object) @type.builtin)
  (#match? @type.builtin
   "^(Game|Network|Map|UI|Time|Convert|String|Input|Math|Random|Cutscene|Camera|RoomData|PersistentData|Json|Physics)$")
)
; Callbacks
(
  [
    (class_declaration name: (identifier) @type.builtin)
    (field_access object: (object) @type.builtin)
  ]
  (#match? @type.builtin "^(Main|Components)$")
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
] @punctuation.bracket
