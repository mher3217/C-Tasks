#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Cube {
  public:
    vector<vector<char> > vec;

    void brake_ToCube(string insert_string){
      int have_cubes = 0;
      for(int i = 0; i < insert_string.size(); i+=8){
        vector<char> row;
        for(int k = i; k < 8 + i; k++){
          row.push_back(insert_string[k]);
        }
        vec.push_back(row); 
        have_cubes++;
      }  
        cout << "You have cube: " << have_cubes << endl;
    }

    void rot_rigth(int cube_num, int h_m){
      cout << " rot_rigth " << "cube: " << cube_num << endl;
      cube_num = cube_num - 1;
      for(int i = 0; i < h_m; i++) {
        char tmp = vec[cube_num][0];
        for(int i = 0; i < 4; i++) {
          char tmp_1 = vec[cube_num][i + 1];
          if(i > 2){      
            vec[cube_num][0] = tmp;     
          }
          else{
            vec[cube_num][i + 1] = tmp;
            tmp = tmp_1; 
          }   
        }
        tmp = vec[cube_num][4];
        for(int i = 4; i < 8; i++) {
          char tmp_1 = vec[cube_num][i + 1];
          if(i > 6){      
            vec[cube_num][4] = tmp;    
          }
          else{
            vec[cube_num][i + 1] = tmp;
            tmp = tmp_1; 
          }       
        }
      }
      for(int i = 0; i < 8; i++) {
        cout << i << " : " << vec[cube_num][i] << endl;
      }
    }

    void rot_left(int cube_num, int h_m){
      cout << " rot_left " << "cube: " << cube_num << endl;
      cube_num = cube_num - 1;
      for(int i = 0; i < h_m; i++) {
        char tmp = vec[cube_num][0];
        for(int i = 3; i >= 0; i--) {
          char tmp_1 = vec[cube_num][i];
          if(i < 1){      
            vec[cube_num][0] = tmp;     
          }
          else{
            vec[cube_num][i] = tmp;
            tmp = tmp_1; 
          }   
        }
        tmp = vec[cube_num][4];
        for(int i = 7; i > 3; i--) {
          char tmp_1 = vec[cube_num][i];
          if(i < 5){      
            vec[cube_num][4] = tmp;    
          }
          else{
            vec[cube_num][i] = tmp;
            tmp = tmp_1; 
          }       
        }
      }
      for(int i = 0; i < 8; i++) {
        cout << i << " : " << vec[cube_num][i] << endl;
      }
    }

  void rot_up(int cube_num, int h_m){
    cout << " rot_up " << "cube: " << cube_num << endl;
    cube_num = cube_num - 1;
    for(int i = 0; i < h_m; i++) {
      for(int k = 4, i = 0; i < 4; i++, k++) {
        char tmp = vec[cube_num][i];
        char tmp_1 = vec[cube_num][k];
        vec[cube_num][i] = tmp_1;
        vec[cube_num][k] = tmp;
      }
    }
    for(int i = 0; i < 8; i++) {
       cout << i << " : " << vec[cube_num][i] << endl;
    }
  }
};

  
int main()
{
  Cube obj;
  string output_string;
  cin >> output_string;
  obj.brake_ToCube(output_string);
  int rotate;
  
  string command = "C:1;R:2;L:1;U:1";
  int ie = 0 ;
  char e;
  int cube_n;
  int rot_R;
  int rot_L;
  int rot_U;
  while(command[ie] != '\0'){
    if(command[ie] == ';' && (command[ie - 3] == 'C')){
      e = command[ie - 1] ;
      cube_n = e - '0';
    }
    else if(command[ie] == ';' && (command[ie - 3] == 'R')){
      e = command[ie - 1] ;
      rot_R = e - '0';
    }
    else if(command[ie] == ';' && (command[ie - 3] == 'L')){
      e = command[ie - 1] ;
      rot_L = e - '0';
    }
    else if(command[ie] == ';' && (command[ie - 3] == 'U')){
      e = command[ie - 1] ;
      rot_U = e - '0';
    }
    ie++;
  }
  
  int r;
  while(true){
    obj.rot_rigth(cube_n, rot_R);
    obj.rot_left(cube_n, rot_L);
    //obj.rot_up(cube_n, rot_U);
    cout << "choos_other_cube: y/n" << endl;
    cin >> e;
    if(e == 'y'){
      cout << "insert new cube" << endl;      
      cin >> r;
      cube_n = r;
    }
    else{
      break;
    }
  }
  return 0;
}