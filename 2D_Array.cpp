#include<iostream>
using namespace std;
int main(){
    
    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}}; // 2D array declaration
    int rows = 4;
    int col = 3;

    cout<<"the matrix value is : "<<matrix[2][1]<<endl;
    return 0;

}
// =================================================================
//                               OUTPUT
// =================================================================
//   the matrix value is : 8
// =================================================================


// Print all matrix element present in 2D Matrix

#include<iostream>
using namespace std;
int main(){
  int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}}; // 2D array declaration
  int rows = 4;
  inr col = 3;

  for(int i = 0; i < rows; i++;){
    for(int j = 0; i < col; j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}


// ===================================================================
//                         OUTPUT
// ====================================================================

//                       1 2 3 
//                       4 5 6
//                       7 8 9
//                       10 11 12

// ===================================================================



// WAP to take input from user to display 2D Array Matrix...................
#inlcude<iostream>
using namespace std;

int main(){
  int matrix[4][3];
  int rows = 4;
  int col = 3;

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < col; j++){
      cin>>matrix[i][j];
    }
  }

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < col; j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}



// ==============================================
//                     OUTPUT
// ==============================================

//             1 2 3 4 5 6 7 8 9 10 11 12 
//                   1 2 3 
//                   4 5 6
//                   7 8 9
//                   10 11 12

// ==============================================
