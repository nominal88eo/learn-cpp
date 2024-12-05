#include <iostream>

using namespace std;

// preferred version
int main()
{
    cout << "Enter an integer: ";

    int num{ };      // define variable num as an integer variable
    std::cin >> num;  // get integer value from user's keyboard

    std::cout << "Double " << num << "is: "<<num * 2<< "\n";  // use an expression to multiply num * 2 at the point where we are going too print it
    std::cout << "Triple " << num << "is: "<<num * 3<< "\n";  // use an expression to multiply num * 3 at the point where we are going too print it
    return 0;
}
