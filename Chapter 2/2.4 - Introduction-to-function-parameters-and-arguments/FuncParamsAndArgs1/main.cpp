#include <iostream>

// This function takes no parameters
// it does not rely on the caller for anything
void doPrint()
{
  std::cout << "In doPrint()\n";
}

// This function takes one integer parameter named x
// The caller will supply the value of x
void printValue(int x)
{
  std::cout << x << '\n';
}

// This function has two integer parameters, one named x, and one named y
// The caller will supply the value of both x and y
int add(int x, int y)
{
  return x + y;
}


int main()
{
  doPrint();      // this call has no arguments
  printValue(6);  // 6 is the argument passed to function printValue();
  add(2, 3);      // 2 and 3 are the arguments passed to function add()

  return 0;
}
