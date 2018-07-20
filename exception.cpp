#include <iostream>
using namespace std;

class V {
  public:
    V(int *p){
      _ptr = p;
      cout << "ok!!!" << endl;
    }

    int& operator*(){
      return  *_ptr;
    }
    int* operator-> ()
    {
      return _ptr;
    }

    ~V(){
      delete _ptr;  
      cout << "error!!!" << endl;
    }
  private:
    int* _ptr;
}; 

void func(int pi){
  if(pi < 0){
    return;
  } 
  int *p = new int;
  V obj(p);
}
int main()  
{  

  func(5);
  return 0;
}  
