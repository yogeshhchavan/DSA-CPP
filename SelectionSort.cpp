#include<iostream>
using namespace std;

int selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallIdx = i;

        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallIdx]){
                smallIdx = j;
            }
        }
        swap(arr[i], arr[smallIdx]);
    }
}


void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {4,1,5,2,3};
    int n = 5;
    selectionSort(arr, n);
    print(arr, n);
}


// ========================================================================
//                           OUTPUT
// ========================================================================
//                       1 2 3 4 5 
// ========================================================================

