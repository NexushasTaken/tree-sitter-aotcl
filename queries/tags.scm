(class_specifier
  name: (identifier) @name) @definition.class
(extension_specifier
  name: (identifier) @name) @definition.extension
(cutscene_specifier
  name: (identifier) @name) @definition.cutscene
(component_specifier
  name: (identifier) @name) @definition.component

(procedure_declaration
  name: (identifier) @name) @definition.procedure

(procedure_call
  procedure: (identifier) @name) @reference.call

(procedure_call
  procedure: (field_access
    field: (identifier) @name)) @reference.call
