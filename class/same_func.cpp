#include <iostream>
using namespace std;

class super{
  public:

    void show(){
      cout << "head" << endl;
    }
};

class sub: public super {
  public:

    void show(){
      cout << "re" << endl;
    }
};



int main() 
{	
	sub obj;
  super &ptr = obj;
  ptr.show();
	return 0;
}