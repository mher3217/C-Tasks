#include <iostream>
#include <stdexcept>
using namespace std;

class Super {
  private:
    Super(){
      cout << "a" << endl;
    };
    ~Super(){};
    
  public:
    static  Super* i ;
    static Super* show(){
      if(!i){
        i = new Super();
      }
      return i;
    }

    static void release_i(){
      delete i;
      i = nullptr;
    }
};

Super* Super::i = nullptr;

int main() 
{	  
  
  Super* obj = Super::show();
  Super* obj_2 = Super::show();
	return 0;
}