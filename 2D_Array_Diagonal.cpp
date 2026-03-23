#include<iostream>
#include<climits>

using namespace std;

int diagonalSum(int mat[][4], int n){
    int sum = 0;
    for(int i =0; i < n; i++){
    
        sum += mat[i][i];
        if(i != n - 1 - i){
            sum += mat[i][n - 1 - i];
        }
            
    }
    return sum;
}

int main(){
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4;
    cout << "Diagonal Sum: " << diagonalSum(matrix, n) << endl;

    return 0;
}

// ==============================================================================

//                           OUTPUT
      
// =============================================================================



//                       Diagonal Sum: 68


// =================================================================================
