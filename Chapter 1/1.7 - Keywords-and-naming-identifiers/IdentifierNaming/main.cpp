#include <iostream>

using namespace std;

int main()
{
    int value;  // conventional

    int Value;  // unconventional (should start with lower case letter)
    int VALUE;  // unconventional (should start with lower case letter and be in all lower case)
    int VaLuE;  // unconventional (see your psychiatrist) ;)

    int my_variable_name;    // conventional (separated by underscores/snake case)
    int my_function_name();  // conventional (separated by underscores/snake case)

    int myVariableName;     // conventional (intercapped/camelCase)
    int myFunctionName();   // conventional (intercapped/camelCase)

    int my variable name;   // invalid (whitespace not allowed)
    int my function name;   // invalid (whitespace not allowed)

    int MyVariableName;   // unconventional (should start with lower case letter)
    int MyFunctionName(); // unconventional (should start with lower case letter)

    // a count of the number of chars in a piece of text, including whitespace and punctuation
    int numberOfChars;

    return 0;
}
