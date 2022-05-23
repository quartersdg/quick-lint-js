// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#ifndef QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H
#define QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H

// This file is **GENERATED** by tools/compile-translations.go.

#include <cstddef>
#include <cstdint>
#include <iterator>
#include <quick-lint-js/consteval.h>
#include <quick-lint-js/hash-fnv.h>
#include <quick-lint-js/translation-table.h>
#include <string_view>

namespace quick_lint_js {
using namespace std::literals::string_view_literals;

constexpr std::uint32_t translation_table_locale_count = 4;
constexpr std::uint16_t translation_table_mapping_table_size = 206;
constexpr std::size_t translation_table_string_table_size = 36204;
constexpr std::size_t translation_table_compressed_table_size = 13653;
constexpr std::size_t translation_table_locale_table_size = 24;

QLJS_CONSTEVAL std::uint16_t translation_table_const_hash_table_look_up(
    std::string_view untranslated, std::uint16_t default_result) {
  struct const_hash_entry {
    std::uint16_t mapping_table_index;
    const char* untranslated;
  };

  // clang-format off
  constexpr const_hash_entry const_hash_table[] = {
          {59, "escaped character is not allowed in identifiers"},
          {0, ""},
          {0, ""},
          {204, "with statement needs parentheses around expression"},
          {0, ""},
          {0, ""},
          {63, "expected 'from \"name_of_module.mjs\"'"},
          {21, "TypeScript's 'enum' feature is not yet implemented by quick-lint-js"},
          {102, "methods should not use the 'function' keyword"},
          {0, ""},
          {191, "unmatched '}'"},
          {3, "\"globals\" descriptor \"shadowable\" property must be a boolean"},
          {124, "missing condition for while statement"},
          {144, "missing value for object property"},
          {0, ""},
          {0, ""},
          {12, "'else' has no corresponding 'if'"},
          {0, ""},
          {0, ""},
          {151, "octal literal may not have exponent"},
          {0, ""},
          {0, ""},
          {117, "missing body for while loop"},
          {0, ""},
          {0, ""},
          {143, "missing semicolon between init and condition parts of for loop"},
          {0, ""},
          {150, "octal literal may not have decimal"},
          {0, ""},
          {0, ""},
          {0, ""},
          {4, "\"globals\" descriptor \"writable\" property must be a boolean"},
          {37, "cannot declare 'yield' inside generator function"},
          {73, "expected variable name for 'import'-'as'"},
          {107, "missing arrow operator for arrow function"},
          {0, ""},
          {0, ""},
          {0, ""},
          {182, "unexpected characters in octal literal"},
          {193, "unmatched parenthesis"},
          {0, ""},
          {0, ""},
          {92, "invalid UTF-8 sequence"},
          {27, "assigning to 'async' in a for-of loop requires parentheses"},
          {0, ""},
          {164, "unclosed block comment"},
          {197, "variable already declared here"},
          {0, ""},
          {94, "invalid function parameter"},
          {138, "missing parameters for arrow function"},
          {16, "C-style for loop is missing its third component"},
          {0, ""},
          {66, "expected expression after 'case'"},
          {86, "generator function '*' belongs before function name"},
          {0, ""},
          {149, "object literal started here"},
          {87, "hex number literal has no digits"},
          {54, "continue can only be used inside of a loop"},
          {84, "functions/methods should not have '=>'"},
          {134, "missing name of exported function"},
          {32, "binary number literal has no digits"},
          {0, ""},
          {0, ""},
          {177, "unexpected 'finally' without 'try'"},
          {2, "\"global-groups\" must be a boolean or an array"},
          {137, "missing operator between expression and arrow function"},
          {0, ""},
          {0, ""},
          {161, "switch statement is missing '{1}' around condition"},
          {20, "RegExp literal flags cannot contain Unicode escapes"},
          {127, "missing for loop header"},
          {160, "stray comma in let statement"},
          {0, ""},
          {0, ""},
          {162, "switch statement needs parentheses around condition"},
          {74, "exporting requires 'default'"},
          {93, "invalid expression left of assignment"},
          {5, "\"globals\" descriptor must be a boolean or an object"},
          {109, "missing body for 'if' statement"},
          {171, "unexpected '#'"},
          {80, "forwarding exports are only allowed in export-from"},
          {90, "incomplete export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {28, "assignment to const global variable"},
          {53, "const variable declared here"},
          {47, "classes cannot be named 'let'"},
          {172, "unexpected '@'"},
          {97, "keywords cannot contain escape sequences"},
          {183, "unexpected control character"},
          {0, ""},
          {153, "private properties are not allowed in object literals"},
          {203, "with statement is missing '{1}' around expression"},
          {81, "function call started here"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {180, "unexpected characters in hex literal"},
          {26, "arrow is here"},
          {0, ""},
          {67, "expected expression before newline"},
          {62, "expected 'as' between '{1}' and '{2}'"},
          {64, "expected 'from' before module specifier"},
          {112, "missing body for class"},
          {121, "missing comma between object literal entries"},
          {179, "unexpected characters in binary literal"},
          {39, "cannot declare variable named keyword '{0}'"},
          {184, "unexpected expression; missing key for object entry"},
          {196, "use of undeclared variable: {0}"},
          {163, "try statement starts here"},
          {50, "commas are not allowed after spread parameter"},
          {119, "missing catch or finally clause for try statement"},
          {205, "{0} with no bindings"},
          {166, "unclosed identifier escape sequence"},
          {181, "unexpected characters in number literal"},
          {0, ""},
          {49, "code point out of range"},
          {0, ""},
          {0, ""},
          {0, ""},
          {114, "missing body for finally clause"},
          {198, "variable assigned before its declaration"},
          {29, "assignment to const variable"},
          {68, "expected expression before semicolon"},
          {41, "cannot export variable named keyword '{0}'"},
          {110, "missing body for 'switch' statement"},
          {186, "unexpected literal in parameter list; expected parameter name"},
          {83, "function declared here"},
          {0, ""},
          {0, ""},
          {0, ""},
          {129, "missing header and body for 'for' loop"},
          {139, "missing property name after '.' operator"},
          {140, "missing property name between '.' and '.'"},
          {188, "unexpected token in export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {34, "cannot access private identifier outside class"},
          {31, "assignment to undeclared variable"},
          {101, "let statement cannot declare variables named 'let'"},
          {156, "redundant delete statement on variable"},
          {122, "missing condition for if statement"},
          {199, "variable declared here"},
          {0, ""},
          {201, "while loop is missing '{1}' around condition"},
          {14, "BigInt literal contains decimal point"},
          {125, "missing end of array; expected ']'"},
          {70, "expected parameter for arrow function, but got a literal instead"},
          {0, ""},
          {200, "variable used before declaration: {0}"},
          {128, "missing function parameter list"},
          {0, ""},
          {45, "cannot update variable with '{0}' while declaring it"},
          {157, "remove '{0}' to update an existing variable"},
          {88, "if statement is missing '{1}' around condition"},
          {82, "function called before declaration in block scope: {0}"},
          {0, ""},
          {0, ""},
          {148, "number literal contains trailing underscore(s)"},
          {25, "array started here"},
          {10, "'await' cannot be followed by an arrow function; use 'async' instead"},
          {91, "indexing requires an expression"},
          {165, "unclosed code block; expected '}' by end of file"},
          {174, "unexpected 'case' outside switch statement"},
          {116, "missing body for try statement"},
          {0, ""},
          {58, "do-while statement starts here"},
          {33, "break can only be used inside of a loop or switch"},
          {0, ""},
          {0, ""},
          {185, "unexpected identifier in expression; missing operator before"},
          {141, "missing semicolon after statement"},
          {194, "unopened block comment"},
          {202, "while loop needs parentheses around condition"},
          {44, "cannot reference private variables without object; use 'this.'"},
          {1, "\"global-groups\" entries must be strings"},
          {0, ""},
          {78, "for-in loop expression cannot have semicolons"},
          {115, "missing body for function"},
          {0, ""},
          {22, "a class statement is not allowed as the body of {1:singular}"},
          {130, "missing initializer in const declaration"},
          {69, "expected hexadecimal digits in Unicode escape sequence"},
          {178, "unexpected '{0}'"},
          {0, ""},
          {0, ""},
          {8, "'?' creates a conditional expression"},
          {135, "missing name or parentheses for function"},
          {96, "invalid lone literal in object literal"},
          {170, "unclosed template"},
          {0, ""},
          {35, "cannot assign to loop variable in for of/in loop"},
          {192, "unmatched indexing bracket"},
          {0, ""},
          {0, ""},
          {0, ""},
          {133, "missing name of exported class"},
          {65, "expected '{{'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {38, "cannot declare and export variable with 'export default'"},
          {103, "missing ',' between variable declarations"},
          {131, "missing name in function statement"},
          {0, ""},
          {173, "unexpected '\\' in identifier"},
          {60, "expected ')' to close function call"},
          {0, ""},
          {152, "octal number literal has no digits"},
          {71, "expected parameter for arrow function, but got an expression instead"},
          {111, "missing body for catch clause"},
          {46, "character is not allowed in identifiers"},
          {167, "unclosed object literal; expected '}'"},
          {0, ""},
          {136, "missing operand for operator"},
          {99, "legacy octal literal may not be BigInt"},
          {57, "do-while loop needs parentheses around condition"},
          {0, ""},
          {0, ""},
          {123, "missing condition for switch statement"},
          {132, "missing name of class"},
          {0, ""},
          {48, "code point in Unicode escape sequence must not be greater than U+10FFFF"},
          {56, "do-while loop is missing '{1}' around condition"},
          {155, "redeclaration of variable: {0}"},
          {51, "commas are not allowed between class methods"},
          {158, "return statement returns nothing (undefined)"},
          {7, "'.' operator needs a key name; use + to concatenate strings; use [] to access with a dynamic key"},
          {0, ""},
          {175, "unexpected 'catch' without 'try'"},
          {0, ""},
          {0, ""},
          {43, "cannot import variable named keyword '{0}'"},
          {100, "legacy octal literals may not contain underscores"},
          {17, "C-style for loops have only three semicolon-separated components"},
          {40, "cannot export variable named 'let'"},
          {176, "unexpected 'default' outside switch statement"},
          {104, "missing ':' in conditional expression"},
          {0, ""},
          {52, "const fields within classes are only allowed in TypeScript, not JavaScript"},
          {159, "stray comma in function parameter"},
          {0, ""},
          {79, "for-of loop expression cannot have semicolons"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {18, "JSON syntax error"},
          {189, "unexpected token in variable declaration; expected variable name"},
          {0, ""},
          {0, ""},
          {0, ""},
          {118, "missing body for {1:headlinese}"},
          {154, "redeclaration of global variable"},
          {0, ""},
          {55, "depth limit exceeded"},
          {15, "BigInt literal contains exponent"},
          {195, "use 'while' instead to loop until a condition is false"},
          {126, "missing expression between parentheses"},
          {76, "extra ',' is not allowed between function call arguments"},
          {13, "'in' disallowed in C-style for loop initializer"},
          {61, "expected ',' between object literal entries"},
          {89, "if statement needs parentheses around condition"},
          {113, "missing body for do-while loop"},
          {19, "React/JSX is not yet implemented"},
          {0, ""},
          {0, ""},
          {0, ""},
          {108, "missing body for 'for' loop"},
          {72, "expected variable name for 'catch'"},
          {0, ""},
          {0, ""},
          {120, "missing catch variable name between parentheses"},
          {0, ""},
          {75, "exporting requires '{{' and '}'"},
          {77, "for loop needs an iterable, or condition and update clauses"},
          {24, "a lexical declaration is not allowed as the body of {1:singular}"},
          {9, "'async static' is not allowed; write 'static async' instead"},
          {187, "unexpected token"},
          {145, "missing variable name"},
          {30, "assignment to const variable before its declaration"},
          {105, "missing '=' after variable"},
          {190, "unicode byte order mark (BOM) cannot appear before #! at beginning of script"},
          {42, "cannot import 'let'"},
          {85, "generator function '*' belongs after keyword function"},
          {106, "missing 'while (condition)' for do-while statement"},
          {0, ""},
          {169, "unclosed string literal"},
          {146, "newline is not allowed between 'async' and arrow function parameter list"},
          {0, ""},
          {11, "'await' is only allowed in async functions"},
          {168, "unclosed regexp literal"},
          {6, "\"globals\" must be an object"},
          {0, ""},
          {95, "invalid hex escape sequence: {0}"},
          {0, ""},
          {147, "number literal contains consecutive underscores"},
          {0, ""},
          {0, ""},
          {36, "cannot declare 'await' inside async function"},
          {0, ""},
          {98, "label named 'await' not allowed in async function"},
          {0, ""},
          {0, ""},
          {142, "missing semicolon between condition and update parts of for loop"},
          {23, "a function statement is not allowed as the body of {1:singular}"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
  };
  // clang-format on

  std::uint64_t hash = hash_fnv_1a_64(untranslated, 14695981039346656130ULL);
  std::uint64_t table_size = 308;
  for (std::uint64_t attempt = 0; attempt <= 4; ++attempt) {
    const const_hash_entry& hash_entry = const_hash_table[(hash + attempt*attempt) % table_size];
    if (hash_entry.mapping_table_index == 0) {
      break;
    }
    if (hash_entry.untranslated == untranslated) {
      return hash_entry.mapping_table_index;
    }
  }
  return default_result;
}
}

#endif

// quick-lint-js finds bugs in JavaScript programs.
// Copyright (C) 2020  Matthew "strager" Glazar
//
// This file is part of quick-lint-js.
//
// quick-lint-js is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// quick-lint-js is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with quick-lint-js.  If not, see <https://www.gnu.org/licenses/>.
