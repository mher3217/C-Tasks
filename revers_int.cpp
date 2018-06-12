#include <iostream>
using namespace std;
void func(int x){
  int k,c;
  int i = 10;
  int Size = 4;
  int *arr = new int[Size];
  int l = 0;

  while(l < Size){
    k = x % i;
    arr[l] = k;
    c = x / i;
    x = c; 
    cout << arr[l] << endl;
    l++;
  }
   delete[] arr;
}
int main() {
  func(1624);
  return 0;
}
