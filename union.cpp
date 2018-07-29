#include <iostream>
#include <vector>

union first{
  int a;
  double b;
  float c;
};

int main() {
  std::vector<first> vec;
  first obj;
  obj.a = 5;
  vec.push_back(obj);
  obj.b = 6.7;
  vec.push_back(obj);
  obj.c = 3.7;
  vec.push_back(obj);


  std::cout <<  vec[0].a << std::endl;
}