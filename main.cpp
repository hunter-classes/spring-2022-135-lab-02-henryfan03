#include <iostream>
#include "funcs.h"

int main() {
  std::cout << "Conducting test for print_interval(-5,10)\n";
  print_interval(-5,10);
  std::cout << "Conducting test for print_interval(1,4)\n";
  print_interval(1,4);
  std::cout << "Conducting test for print_interval(1,100)\n";
  print_interval(1,11);
  return 0;
}
