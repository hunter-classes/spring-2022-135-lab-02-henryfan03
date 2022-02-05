#include <iostream>

int main() {
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;
  std::cout << fib[0] << std::endl;
  std::cout << fib[1] << std::endl;
  for (int i = 2;i < 60;i++) {
    fib[i] = fib[i-1] + fib[i-2];
    std::cout << fib[i] << std::endl;
  }
  // we observe that the numbers approaching 2 billion start to have
  // negative signs, which is a sign that the values are exceeding
  // the maximum binary equivalent for a signed integer.
  return 0;
}
