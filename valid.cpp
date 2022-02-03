#include <iostream>

int main() {
  std::cout << "Please enter an integer: ";
  int input;
  std::cin >> input;
  while (input > 100 || input < 0) {
    std::cout << "\nPlease re-enter: ";
    std::cin >> input;
  }
  std::cout << "Number squared is " << (input * input) << std::endl;
  return 0;
}
