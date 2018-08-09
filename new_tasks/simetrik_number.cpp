#include <iostream>



int main() {
  int num;
  std::cout << "Insert your number: ";
  std::cin >> num;// = 127818521;
  int e = 10;

  while(num / e != 0){
    e *= 10;
  }
  e /= 10;



  while(num % 10 == num / e){
    num %= e;
    num /= 10;
    e /= 100;

    if(num % e < 10 || num % e == 0){
      std::cout << "simetrik" << std::endl;
      break;
    }
  }
  if(num % 10 != num / e){
    std::cout << "false" << std::endl;
  }
  
  

  return 0;
}