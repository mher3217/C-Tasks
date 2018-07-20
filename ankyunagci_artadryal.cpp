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
int k = 1;
int s = rows;
if(rows == 0){
  cout << "error: " << endl;
  return 0;
}
//veragrumem arjeqner
else{
  for(int i = 0; i < cols; i++){
    for(int j = 0; j < cols; j++){
      arr[i][j] = rand() % 20;
      cout << arr[i][j] << "\t";
    }
    cout << endl;
    s--;
    k = k * arr[i][s] ;
  }
  cout <<  "artadryal: " << k << endl;
} 
//jnjumem dinamik massivy
  for(int i = 0; i < cols; i++){
    delete[] arr[i];
  }
  delete[] arr;
  return 0;
}
