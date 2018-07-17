#include <iostream>
using namespace std;
int main() {

  int Size;
  cout << "End number: " << endl;  
  cin >> Size;
  int *arr = new int[Size];
  for(int i = 0; i < Size; i++){
    arr[i] = i - 1;
  }

  int tivy;
  cout << "Your number: " << endl; 
  cin >> tivy;

  int min = 0;
  int max = Size;
  if(tivy > max){
    cout<< "aydpisi tiv chka" << endl;
  }

  while (min <= max){
    int mid = (min + max) / 2;
    if(tivy == arr[mid]){      
      cout << "Index number: " << mid << endl; 
      break;   
    }    
    else if (arr[mid] < tivy){    
      min = mid + 1;
    }
    else if (arr[mid] > tivy){		
      max = mid - 1;
    }    
 }
  delete []arr;
  return 0;
}





