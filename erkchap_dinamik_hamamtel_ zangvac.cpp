#include <iostream>
using namespace std;
int* merge_arrays(int* arr1, int* arr2, int Size_1, int Size_2){

  int rows = Size_2;
  int cols = 2;

  int **arr = new int *[rows];

  for(int i = 0; i < rows; i++){
    arr[i] = new int[cols]; 
  }

  int tmp;
  for(int i = 0; i < rows; i++){

    for(int j = 0; j < cols; j++){

      if(*arr1 > *arr2){
        arr[i][0] = *arr2;
        arr[i][1] = *arr1; 
      }
      else if(*arr1 < *arr2){
        arr[i][0] = *arr1;
        arr[i][1] = *arr2; 
      }
      cout << arr[i][j] << endl;
    }

    arr1++;
    arr2++;
  }

//jnjumem dinamik massivy
  for(int i = 0; i < cols; i++){
    delete[] arr[i];
  }
  delete[] arr;
};

int main() {
  const int Size1 = 5, Size2 = 5;
  int arr_1[Size1] = {5, 10, 13, 15, 19};
  int arr_2[Size2] = {4, 11, 12, 16, 17};
  merge_arrays(arr_1, arr_2, Size1, Size2);
return 0; 
}