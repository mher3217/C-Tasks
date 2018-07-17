#include <iostream>
using namespace std;
class Vector
{
  public:
    Vector(const int sz = 10){
      m_arr = new int[sz];
    }

    //this function push element
    void push_back ( const int value) {
      if(this->m_top == (this->m_size - 1)){
        int *tmp = new int[2*this->m_size];
        for (int i = 0; i < this->m_size; i++){
          tmp[i] = this->m_arr[i];
        }
        delete[] this->m_arr;
        this->m_arr = tmp;
        this->m_size *= 2;
      }
      this->m_arr[++this->m_top] = value;
    } 

    //this function insert element whit index & elem 
    void insert_at (int index, int elem) {  
      *(m_arr + index) = elem;
        
    }
    
    int get_at(int index){
      return *(m_arr+index);
    };

    //int get_size();
  private:
    int* m_arr;
    int m_size;
    int m_top = -1;
};


int main(){
  Vector obj;
  obj.push_back(5);
  obj.push_back(14);

  obj.insert_at(2, 115);
  obj.insert_at(3, 6);
  obj.insert_at(4, 78);
  cout << obj.get_at(4) << endl; 
  return 0;
}