// // print Sum of max in ROWs /COLs..........!
#include<iostream>
#include <climits>

using namespace std;

// bool linearSearch(int matrix[][3], int row, int col, int kay){
//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){
//             if(matrix[i][j] == kay){
//                 return true;
//             }
//         }
//     }
//     return false;
// }


int getMaxSum(int mat[][3], int row, int col){
    int maxRowSum = INT_MIN;

    for(int i = 0; i < row; i++){
        int rowsSumI = 0;
        for(int j = 0; j < col; j++){
            rowsSumI += mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowsSumI);
    }
    return maxRowSum;
}

int getMaxColSum(int mat[][3], int row, int col){
    int maxColSum = INT_MIN;

    for(int j = 0; j < col; j++){
        int colSum = 0;

        for(int i = 0; i < row; i++){
            colSum += mat[i][j];
        }

        maxColSum = max(maxColSum, colSum);
    }

    return maxColSum;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    cout<<"Rows: "<<getMaxSum(matrix, row, col)<<endl;
    cout<<"Cols: "<<getMaxColSum(matrix, row, col)<<endl;
    return 0;
}



// ==============================================================================
//                                 output
// ==============================================================================

//                               Rows: 24
//                               Cols: 18

// ================================================================================
