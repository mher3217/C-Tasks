#include <iostream>
const int Size = 5;


void rec(int *p, int k, int e){
  if (k >= (Size/2)){
    int tmp = *(p+e);
    *(p + e) = *(p + k);
    *(p + k) = tmp;    
    rec(p, --k, ++e);  
  }
  else{ 
    return;
  } 
}

int main() {
  
  int arr[Size] = {16, 7, 4, 63, 1};
  int k = Size - 1;
  rec(arr, k, 0);
  
  for(int i = 0; i < Size; i++){
    std::cout << arr[i] << std::endl;
  }
  

  return 0;
}
