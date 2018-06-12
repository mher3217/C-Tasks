#include <iostream>
using namespace std;
int main() {
  int rows ;
  cout << "Insert rows: ";
  cin >> rows;
  int cols ;
  cout << "Insert cols: ";
  cin >> cols;

  int **arr = new int *[rows];

//amen elementin nor dinamik masivem veragrum
  for(int i = 0; i < rows; i++){
    arr[i] = new int[cols]; 
  }

//veragrumem arjeqner
int arr1[] = {1, 10, 13, 15};
int arr2[] = {4, 11, 12, 16, 17};
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      arr[i][j] = rand() % 20;
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }

//jnjumem dinamik massivy
  for(int i = 0; i < cols; i++){
    delete[] arr[i];
  }
  delete[] arr;
  return 0;
}