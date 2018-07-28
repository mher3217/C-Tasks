#include <iostream>
using namespace std;

template<typename T>
class List{
  public:
      int i = 0;
      int size(){
        return i;
      }
      void insert(int pos, const T& newValue){
        i++;
        
        
        if(0 == pos){ 
          Node *tmp = new Node(newValue);
          tmp->next = m_head;
          m_head = tmp;
        }

        else if(pos == size()){
          Node* cur = m_head;
          while(cur->next != nullptr){
            cur = cur->next; 
          }
          cur->next = new Node(newValue);
        }

        else{
          Node* cur = m_head;
          int count = 1;
          while(count < pos){
            cur = cur->next;
            ++count;
          }
          cur->next = new Node(newValue, cur->next);
        }
      }

      void remove(int pos){
        i--;
        if(0 == pos){
          Node* tmp = m_head;
          m_head = m_head->next;
          delete tmp;
        }
        else{
          Node*cur = m_head;
          int count = 1;
          while(count < pos){
            cur = cur->next;
            ++count;
          } 
          Node* tmp = cur->next;
          cur->next = tmp->next;
          delete tmp;
        }
      }
      
      int find(const T& value){
        int pos = 0;
        Node* cur = m_head;
        while(cur && cur->value != value){
          cur = cur->next;
          ++pos;
        }
        return (pos == size()) ?-1:pos;
      }

		void print(){
		  int a = 0;
		  Node* cur = m_head;
		  while(size() != a) {
        a++;
        cout<< cur->value << endl;
		    cur = cur->next ;
      }
		}

  private:
    struct Node{  
      Node* next ;
      T value;
      Node(const T& v): value(v), next(nullptr) { }

      Node(const T& v, Node* n): value(v), next(n) {}
      Node(){  }
    };
    Node* m_head;
    
};

int main()
{
  List<int> obj;
  obj.insert(0, 45);
  obj.insert(1, 56);
  obj.insert(2, 6);
  obj.remove(0);
  
  obj.print();
  cout << "Insert num, return index: " << obj.find(56) <<endl;
  cout << "You have elements: " << obj.size() << endl;
  return 0;
}
