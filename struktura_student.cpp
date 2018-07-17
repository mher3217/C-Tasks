#include <iostream>
using namespace std;

        struct Student{
                int age;
                int score(int kurs_1, int kurs_2, int kurs_3 ){
			return (kurs_1 + kurs_2 + kurs_3) / 2;
		};
                std::string name;
        };

int main(){
	Student a;

	cout << "insert student age: " << endl;
        cin >> a.age;
	cout << "student age: " << a.age << endl;
	cout << "insert student score: " << endl;
	int k_1, k_2, k_3;
	cin >> k_1;
	cin >> k_2;
	cin >> k_3;
	cout << "student score: " << a.score(k_1,k_2, k_3) << endl;
	cout << "insert student name: " << endl; 
	cin >> a.name ;
        cout << "student name: " << a.name << endl;	
	return 0;
}
