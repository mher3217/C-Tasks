#include <iostream>
#include <string>
using namespace std;

  class Stack{
    private:
      int* _arr;  
      int _top;
      int _size ;  
    public:
      Stack(const int sz = 100){
        _arr = new int[sz];
        _top = -1;
      }

      void push(Stack* p, const int value){
        if(p->_top == (p->_size - 1)){
          int *tmp = new int[2*p->_size];
          for (int i = 0; i < p->_size; i++){
            tmp[i] = p->_arr[i];
          }
          delete[] p->_arr;
          p->_arr = tmp;
          p->_size *= 2;
        }
        p->_arr[++p->_top] = value;
      }    

      int pop(Stack *p){
        if(p->_top == - 1){
          cout << "stack empty!" <<endl;
          return -1;
        } 
        return p->_arr[p->_top--];
      }     
  };

  
         

int main()
{
	Stack obj;

  obj.push(&obj, 5);
  obj.push(&obj, 65);
  
  obj.pop(&obj) ;
  cout << obj.pop(&obj) << endl;
	return 0;
}