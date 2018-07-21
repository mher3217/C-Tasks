#include <iostream>


class Vector{
public:
  Vector(const int sz = 1){
    m_arr = new int[sz];   
  }

  virtual void push(int a) = 0;
  virtual int pop() = 0;
  int *m_arr;
  int m_top = -1;
  int m_size;
};

class Stack: private Vector{
public:  
  void push(const int a){   
    if(this->m_top == (this->m_size - 1)){
      int *tmp = new int[2*this->m_size];
      for (int i = 0; i < this->m_size; i++){
        tmp[i] = this->m_arr[i];
      }
      delete[] this->m_arr;
      this->m_arr = tmp;
      this->m_size *= 2;
    }
    m_arr[++m_top] = a;    
  }

  int pop(){
    m_top--; 
    if(m_top == - 1){
      std::cout << "stack empty!" << std::endl;
      delete[] m_arr; 
      return -1;
    }   
    //std::cout << m_top << std::endl;
    return m_arr[m_top];     
  }

  void print(){
    std::cout << m_arr[2] << std::endl;
  }
};

int main()
{
  Stack obj;
  obj.push(32);
  obj.push(56);
  obj.push(6);
  obj.pop();
  obj.push(78); 
  obj.print();
  return 0;
}
