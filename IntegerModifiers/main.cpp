#include <iostream>

int main(){
  signed int value1 {10};
  signed int value2 {-300};

  std::cout << "value1 : " << value1 << std::endl;
  std::cout << "value2 : " << value2 << std::endl;
  std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
  std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

  unsigned int value3 {4};
  // unsigned int value4 {-5}; // Compiler error
 
  return 0;
}