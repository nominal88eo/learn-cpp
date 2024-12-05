#include <iostream>

using namespace std;

// less-bad version
int main()
{
    cout << "Enter an integer: ";

    int num{ };      // define variable num as an integer variable
    std::cin >> num;  // get integer value from user's keyboard

    int doublenum{ num * 2};  // define a new variable and initialize it with num * 2

    std::cout << "Double that number is: " << num << "\n";
    return 0;
}
