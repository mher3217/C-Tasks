#include <iostream>
#include <string>

using namespace std;

class Super {
  public:
    virtual void show () {
      cout << "Super_class: "  << endl;
    }
};

class Sub: public Super{
  public:
    virtual void show() {
      cout << "Sub_class: "   << endl;
    }
};
class Sub_2: public Sub{
  public:
    virtual void show() {
      cout << "Sub_2_class: " << endl;
    }
};

class A{
  public:
  void func(Super *p){
    p->show();
  }
};

int main() 
{	  
  Sub_2 k;
  A obj;
  obj.func(&k);
	return 0;
}