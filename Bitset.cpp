#include <iostream>

class Bitset{
public:

  int change_1(int& l, int& s){
    l = l & ~(1 << (s - 1));
    return  l;    
  }

  int change_0(int& l, int& s){
    l = l | (1 << (s - 1));
    return  l;   
  }
};
int main() {
  Bitset obj;
  int l = 5;
  int k = 3;

    obj.change_1(l, k) ; 
    std::cout << l << std::endl;

   obj.change_0(l, k) ;
   std::cout << l << std::endl;
}