#include <iostream>

int getValueFromuser()
{
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

void printDouble(int value)  // This function now has an integer parameter
{
  std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
//  int num { getValueFromuser() };
//  printDouble(num);

  printDouble(getValueFromuser());

  return 0;
}
