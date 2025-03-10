#include <iostream>
using namespace std;

int main()
{
    // Comment: The following are rules for valid variable names in C++:

    // Rule 1: Variable names cannot start with a number.
    // int 12number;   // Error: variable name starts with a digit, which is not allowed.

    // Rule 2: Variable names must start with a letter or an underscore.
    int number123; // Valid variable name, starts with a letter.

    // Rule 3: Avoid using spaces in variable names.
    // string first name;   // Error: spaces are not allowed in variable names.

    string first_name; // Valid variable name using an underscore.

    // Rule 4: Special characters (other than underscore) are not allowed in variable names.
    // float num@; // Error: '@' is an invalid character.

    float _num$; // Valid variable name, but '$' is not typically used in C++.

    // Rule 5: Keywords cannot be used as variable names.
    // double for; // Error: 'for' is a reserved keyword.

    // Rule 6: Variables can be declared multiple times in a block, but with different names.
    int x;      // Declare an integer variable 'x'
    int number; // Declare another integer variable 'number'

    // Rule 7: Variable names are case-sensitive.
    // The following two variables are different due to case sensitivity:
    int Num; // Valid variable name
    int num; // Another valid variable name

    // Rule 8: A variable can only be declared once in a given scope.
    int result; // Declare a variable 'result'

    // The following line will cause a compile-time error, because 'result' has already been declared.
    // int result; // Error: 'result' already declared

    return 0;
}
