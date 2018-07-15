#include <iostream>
using namespace std;

class super{
  public:
    void show(){
      cout << "head" << endl;
    }
  private:
    super(){}
};

class sub: public super {
  public:

    void show(){
      cout << "re" << endl;
    }
};



int main() 
{	
	
  //super obj;
  //obj.show();
	return 0;
}