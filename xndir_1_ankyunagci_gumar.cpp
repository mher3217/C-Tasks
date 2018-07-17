#include <iostream>
using namespace std;
int main() {
  int rows ;
  cout << "Insert rows = cols: ";
  cin >> rows;
  int cols = rows;
  //cout << "Insert cols: ";
  //cin >> cols;

  int **arr = new int *[rows];

//amen elementin nor dinamik masivem veragrum
  for(int i = 0; i < rows; i++){
    arr[i] = new int[cols]; 
  }
int k = 0;
//veragrumem arjeqner
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      arr[i][j] = rand() % 20;
      cout << arr[i][j] << "\t";
    }
    cout << endl;
    k = k + arr[i][i] ;
  }
  cout <<  "Summ: " << k << endl;
  
//jnjumem dinamik massivy
  for(int i = 0; i < cols; i++){
    delete[] arr[i];
  }
  delete[] arr;
  return 0;
}
