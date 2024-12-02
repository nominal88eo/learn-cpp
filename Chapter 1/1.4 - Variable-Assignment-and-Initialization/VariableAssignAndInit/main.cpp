#include <iostream>

int main()
{
//    int x;       // define and integer variable named x
//    int y, z;    // define two integer variables, named y and z

//    int width;    // define an integer variable named width
//    width = 5;    // copy assignment of value 5 into variable width
//    std::cout << width;
//
//    width = 7;    // change value stored in variable width to 7
//    std::cout << width;

//    int width { 5 };    // define variable width and initialize with initial value 5
//    std::cout << width;

//    int a;  // default-initialization (no initializer)
//
//    // Traditional initialization forms:
//    int b = 5;      // copy-initialization (initial value after equals sign)
//    int c ( 6 );    // direct-initialization ( initial value in paranthesis)
//
//    // Modern initialization forms (preferred):
//    int d { 7 };    // direct-list-initialization (initial value in braces)
//    int e {};       // value-initialization (empty braces)
//
//    // List-initialization
//    int width { 5 };     // direct-list-initialization of initial value 5 into variable width (preferred)
//    int height = { 5 };  // copy-list-initialization of initial value 6 into variable height (rarely used)
//
//    // List initialization disallows narrowing conversations
//    // An integer can only hold non-fractional values
//    int w1 { 4.5 };    // compile error: list-init does not allow narrowing conversation of 4.5 to 4
//
//    int w2 = 4.5;      // compiles: copy-init initializes width with 4
//    int w3 (4.5);      // compiles: direct-init initializes width with 4

//    // Value-initialization and zero-initialization
//    int width {};    // value-initialization / zero-initialization to value 0
//    std::cout << width;
//
//    int x { 0 };      // direct-list-initialization with initial value 0
//    std:: cout << x;  // we're using that 0 value here
//
//    int y {};         // value initialization
//    std::cin >> y;    // we're immediately replacing that value so an explicit 0 would be meaningless

//    int a = 4, b = 5;   // correct: a and b both have initializers
//    int a, b = 5;       // wrong: a doesn't have its own initializer

    // The [[[maybe_unused]] attribute C++17
    // Here's some math/physics values that we copy-pasted from elsewhere
    [[maybe_unused]]double pi { 3.14159 };    // Don't complain if pi is unused
    [[maybe_unused]]double gravity { 9.8 };   // Don't complain if gravity is unused
    [[maybe_unused]]double phi { 1.61803 };   // Don't complain if phi is unused

    std::cout << pi << '\n';    // pi is used
    std::cout << phi << '\n';   // phi is used

    // The compiler will no longer warn about gravity not being used

    return 0;
}
