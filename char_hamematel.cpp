#include <iostream>
using namespace std;
void rec(char* n){ 
  char made[] = "Hello";
  char *s = made;
    
  while(*n != '\0'){
    if((*n ^ *s) != 0){
      cout << "false" << endl;
      break;
    }
    n++;
    s++;
  }

  if((*n ^ *s) == 0){
    cout << "true" << endl;
  }
}

int main() {
  char user[] = "Hello";
  rec(user); 
  return 0;
}
