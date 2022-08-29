#include <iostream>
#include <iomanip>

int main() {
  std::cout << "Enter one integer: ";
  int saved_integer = 0;
  std::cin >> saved_integer;
  std::cout << "Enter another integer: ";
  int another_integer = 0;
  std::cin >> another_integer;
  int sum = another_integer + saved_integer;
  std::cout << "Their sum is " << sum;
  
  
  
}