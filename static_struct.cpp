#include <iostream>
#include <string>
using namespace std;
int top = 0;

  struct stac{
    int arr[3];  
  };
  
  void push(stac& x, int r){
    x.arr[top] = r;
    top++; 
  }

  void pop( stac& f){
    f.arr[top];
    top--; 
    cout << "End number: " << f.arr[top] << endl;
  }
  


int main()
{
  stac obj;
  push(obj,2);
  push(obj,3);
  push(obj,45);
  push(obj,36);
  pop(obj); 
  pop(obj); 
	return 0;
}
