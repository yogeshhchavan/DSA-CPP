#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){
    int st = 0, end = arr.size() -1;

    while(st <= end){
        int mid = (st + end) / 2;

        if(tar > arr[mid]){
            st = mid + 1;
        }
        else if(tar < arr[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){

    // Binary Search Algorithm
    
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout<<" First Target is :"<<binarySearch(arr1, tar1)<<endl;
    
    vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12};
    int tar2 = 0;
    cout<<" Second Target is :"<<binarySearch(arr2, tar2)<<endl;
    return 0;
}


// =======================================================================
//                                 OUTPUT
// =======================================================================
//                               First Target is :6
//                               Second Target is :1
// =======================================================================
