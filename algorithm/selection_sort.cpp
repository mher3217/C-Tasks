#include <iostream>

int main() {
  int const size = 9;
  int arr[size] = {100, 11, 6, -8, 9, 7, 1, 68, -2};

  int k ;

  for(int i = 0; i < size; i++){
    int tmp = arr[i];
    k = i + 1;   
    while(k < size){    
      if(tmp > arr[k]){
        std::swap(tmp,arr[k]);
      }
      ++k; 
    }
    arr[i] = tmp;   
  }
    
  for(int j = 0; j < size; j++){
    std::cout << arr[j] << std::endl;
  }
}