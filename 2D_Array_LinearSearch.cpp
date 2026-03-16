#include<iostream>
using namespace std;

bool linearSearch(int mat[][3], int row, int col, int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false;

}

int main(){
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;
    
    cout<<"The element is "<<linearSearch(matrix, rows, cols, 8)<<endl;
    return 0;
    
}

// =============================================================
//                   OUTPUT
// =============================================================

// The element is 1

// =============================================================
