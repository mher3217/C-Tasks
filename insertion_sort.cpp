#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>


int main() {
    std::list<int> l1;

    l1.push_back(1);
    l1.push_back(56);
    l1.push_back(4);
    l1.push_back(9);
    l1.push_back(-8);
    l1.push_back(988);
    l1.push_back(3);
    
    std::list<int>::iterator curr = l1.begin();
    ++curr;

    for (std::list<int>::iterator it = l1.begin(); it != l1.end(); it++){  
        while(*curr < *it ){
          std::swap(*curr, *it);
          --it;
          --curr;
          if(curr == l1.begin()){
            std::cout << "break" << std::endl;
            break;
          }
        }
        ++curr;
        if(curr == l1.end()){
          std::cout << "break" << std::endl;
          break;
        }
      }

    for (std::list<int>::iterator it = l1.begin(); it != l1.end(); it++){
      std::cout << *it << std::endl;
    }
}