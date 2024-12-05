#include <iostream>

using namespace std;

// worst version
int main()
{
    cout << "Enter an integer: ";

    int num{ };      // define variable num as an integer variable
    std::cin >> num;  // get integer value from user's keyboard

    num = num * 2;  // double num's value, then assign that value back to num

    std::cout << "Double that number is: " << num << "\n";
    return 0;
}
