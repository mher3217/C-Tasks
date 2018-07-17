#include <iostream>
#include <string>
using namespace std;
struct Person{
  string name ;
  int year;
  bool ser;
  string mail;
};
void insert(Person& x){
  x.name = "kkkk";
  x.year = 10;
  x.ser = false;
  x.mail = "qqqq";
}
void output(const Person& f){
  cout << "Name: " << f.name<< endl;
  cout << "Year: " << f.year<< endl;
  cout << "Ser: " << f.ser<< endl;
  cout << "Mail: " << f.mail<< endl;
}
int main()
{
	Person obj;
  insert(obj);
  output(obj);
	return 0;
}