#include <iostream>
#include <vector>


int main() {
  
  void* arr[3];
  arr[0] = new int(5);
  arr[1] = new double(6.2);
  arr[2] = new char('d');
  
  std::cout <<  *((int*)arr[0]) << std::endl;
  std::cout << *((double*)arr[1]) << std::endl;
}