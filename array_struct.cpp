#include <iostream>
#include <string>
using namespace std;

struct Person{
  int i_1;  
};
 
void push(Person& x, int r){
  x.i_1 = r;
}

void pop(const Person& f){
  cout << "End number: " << f.i_1 << endl;
}

int main()
{
	Person obj[2];
  int n;
  for(int i = 0; i < 3; i++){
    cin >> n;
    push(obj[i],n); 
  }
  
  pop(obj[2]); 
	return 0;
}