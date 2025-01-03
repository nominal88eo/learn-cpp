#include <iostream>

// Do not return statement at the end of a non-value returning function

// void means the function does not return a value to the caller
void printHi()
{
  std::cout << "Hi" << '\n';

  return;  // tell compiler to return to the caller -- this is redundant since the return will happen at the end of the function anyway!
}  // return will return to caller here


int main()
{
  printHi();

  return 0;
}
