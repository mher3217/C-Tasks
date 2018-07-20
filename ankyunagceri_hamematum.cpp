#include <iostream>
using namespace std;
int func(){
  int rows ;
  cout << "Insert rows = cols: ";
  cin >> rows;
  int cols = rows;
  //cout << "Insert cols: ";
  //cin >> cols;

  int **arr = new int *[rows];
  int **arr_1 = new int *[rows];
  
//amen elementin nor dinamik masivem veragrum
  for(int i = 0; i < rows; i++){
    arr[i] = new int[cols]; 
  }

  for(int i = 0; i < rows; i++){
    arr_1[i] = new int[cols]; 
  }
//veragrumem arjeqner
  int k = 0;
  int x = rows;
  
  int ojan_1 = 0;
  int ojan_2 = 0;
  for(int i = 0; i < cols; i++){
    for(int j = 0; j < rows; j++){
      arr[i][j] = rand() % 20;
      cout << arr[i][j] << "\t";
    }
    cout << endl;

    x--;
    k = k + arr[i][i];
    ojan_1 = ojan_1 + arr[i][x];
  }
  cout <<  "Summ: " << k << endl;
  cout <<  "Summ: " << ojan_1 << endl;
  
  int s = 0;
  for(int i = 0; i < cols; i++){
    for(int j = 0; j < rows; j++){
      arr_1[i][j] = rand() % 20;
      cout << arr_1[i][j] << "\t";
    }
    cout << endl;

    x--;
    s = s + arr_1[i][i] ;
    ojan_2 = ojan_2 + arr[i][x];
  }
  cout <<  "Summ: " << s << endl;
  cout <<  "Summ: " << ojan_2 << endl;

//hamematuma
  if((k+ojan_1) > (s+ojan_2)){
    cout << "True " << endl;
  }
  else{
    cout << "false " << endl;
  }
//jnjumem dinamik massivy
  for(int i = 0; i < cols; i++){
    delete[] arr[i];
  }
  delete[] arr;

  for(int i = 0; i < cols; i++){
    delete[] arr_1[i];
  }
  delete[] arr_1;
}


int main() {
  func();
  return 0;
}
