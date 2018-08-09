#include <iostream>



int main() {
 int how_many = 0;

  for(int i = 100000; i < 1000000; i++){

    int k = 0;
    int z = i;
    int e = z / 10;

    while(z % 10 != e % 10){
      if(z >= 10){
        z /= 10;
      }
      if(e >= 10){       
        e /= 10;
      }
      k++;
    }
    if(k == 4){
      how_many++; 
    }
  }

  std::cout << how_many << std::endl;


  return 0;
}