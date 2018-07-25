#include <iostream>

int main() {
  int arr[] = {35, 3, 2, -5, 89};
  for(int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++){
    int curr = arr[i];
    int j = i - 1;
    while(j >= 0 && curr < arr[j]){
      arr[j + 1] = arr[j];
      --j;    
    }
    arr[j + 1] = curr;
      
  }
std::cout << arr[4] << std::endl;
}