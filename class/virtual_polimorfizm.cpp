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



int main() 
{	  
  Super obj;
  Sub op;
  Super *ptr = &op;
  ptr->show();
	return 0;
}