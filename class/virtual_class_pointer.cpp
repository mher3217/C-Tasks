#include <iostream>

using namespace std;

class Super {
  public:
  virtual void func() = 0;
};
class Sub: public Super {
  public:
  virtual void func(){
    cout << "aaaa" << endl;
  }
};

class Other{
  public:
    void foo(Super *e){
        e->func();
    }
};

int main()
{

  Sub op;
  Other k;
  //Super *ptr = &op;
  //ptr->func();
  k.foo(&op);
  return 0;
}

