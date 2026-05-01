#include <iostream>

int main() {
  //int a = 10, b = 50, c = 30;
  int a, b, c;
  std::cout<<"Enter three numbers: ";
    std::cin>>a>>b>>c;

  if (a > b) {
    if (a > c) {
      std::cout << a << " is the largest number";
    } else {
      std::cout << c << "is the largest number";
    }
  } else {
    if (b > c) {
      std::cout << b << " is the largest number";
    } else {
      std::cout << c << "is the largest number";
    }
  }
}