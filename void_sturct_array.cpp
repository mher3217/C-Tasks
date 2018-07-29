#include <iostream>
#include <string>

struct Type{
  std::string name;
  void* addres;
};

int main() {
  Type arr[4];
  arr[0].name = "int";
  arr[0].addres = new int(25);
  std::cout << *((int*)arr[0].addres) << std::endl;
}