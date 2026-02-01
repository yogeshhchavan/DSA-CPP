#include<iostream>
using namespace std;

int linearFunction(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;   // index found
        }
    }
    //return -1; // not found
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 8;

    cout <<"Target Element is : "<<linearFunction(arr, size, target) << endl;
    return 0;
}


// ==========================================================================================
//                                   OUTPUT
// ===========================================================================================
//                                   Target Element is : 3
