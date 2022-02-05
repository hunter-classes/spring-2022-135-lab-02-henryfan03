#include <iostream>

int main() {
  int myData[10];
  for (int i = 0;i<10;i++) {
    myData[i] = 1;
  }
  int index = 0;
  int value = 0;
  do {
    std::cout << "myData = ";
    for (int i = 0;i<10;i++) {
      std::cout << myData[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Enter an index value: ";
    std::cin >> index;
    std::cout << "Enter an new array value: ";
    std::cin >> value;
    myData[index] = value;
    std::cout << std::endl;
  } while (0 <= index && index < 10);
  std::cout << "Index out of range, exitting." << std::endl;
  return 0;
}
