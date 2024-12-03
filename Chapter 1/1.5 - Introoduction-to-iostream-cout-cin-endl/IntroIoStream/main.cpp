#include <iostream>

using namespace std;

int main()
{
    // Cout
//    cout << "Hello world!"; // print Hello world! to console
//    cout << 4; // print 4 to console
//
//    int x{5};  // define integer variable x, initialized with value 5
//    //std::cout << x;  // print value of x (5) to console
//    std::cout << "x is equal to: " << x;
//    std::cout << "Hello" << " world!";
//
//    std::cout << "Hi!";
//    std::cout << "My name is Erkan.";
//
//    std::cout << "Hi!" << std::endl;  // std:endl will cause to cursor to move to the next line
//    std::cout << "My name is Erkan." << std::endl;
//
//    std::cout << "x is equal to: " << x << '\n';    // single quoted (by itself) (conventional)
//    std::cout << "Yep. " << "\n";                   // double quoted (by itself) (unconventional but okay)
//    std::cout << "And that's all, folks!\n";        // between double quotes in existing text (conventional)

    // Cin
//    std::cout << "Enter a number: ";    // ask user for a number
//    int x{};        // define variable x to hold user input (and value-initialize it)
//    std::cin >> x;  // get number from keyboard and store it in variable x
//    std::cout << "You entered " << x << '\n';

//    std::cout << "Enter two numbers separated by a space: ";
//    int x{};  // define variable x to hold user input (and value-initialize it)
//    int y{};  // define variable y to hold user input (and value-initialize it)
//    std::cin >> x >> y;  // get two numbers and store in variable x and  respectively
//    std::cout <<  "You entered " << x << " and " << y << '\n';

//    std::cout << "Enter two numbers: ";
//    int x{};
//    std::cin >> x;
//    int y{};
//    std::cin >> y;
//    std::cout <<  "You entered " << x << " and " << y << '\n';

    std::cout << "Enter three numbers separated by a space: ";
    int x{};  // define variable x to hold user input (and value-initialize it)
    int y{};  // define variable y to hold user input (and value-initialize it)
    int z{};  // define variable z to hold user input (and value-initialize it)
    std::cin >> x >> y >> z;  // get two numbers and store in variable x and  respectively
    std::cout <<  "You entered " << x << ", " << y << ", and " << z << ".\n";

    return 0;
}
