#include <iostream>

int doubleNum(int x)
{
  return 2 * x;
}

int main()
{
  std::cout << "Enter an integer: ";
  int readNum{};
  std::cin >> readNum;

  std::cout << "Doubled number: " << doubleNum(readNum);

  return 0;
}
