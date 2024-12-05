#include <iostream>

using namespace std;

// preferred version
int main()
{
    cout << "Enter an integer: ";

    int num{ };      // define variable num as an integer variable
    std::cin >> num;  // get integer value from user's keyboard

    std::cout << "Double that number is: " << num * 2 << "\n";  // use an expression to multiply num * 2 at the point where we are going too print it
    return 0;
}
