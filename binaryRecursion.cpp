//Binary Search with Recursion
#include<iostream>
#include<vector>
using namespace std;

int binaryRecursion(vector<int> arr,int tar, int st, int end){

    while(st <= end){

        int mid = st +(end - st) / 2;
        if(tar > arr[mid]){
            return binaryRecursion(arr,tar,mid+1,end);
        }
        else if(tar < arr[mid]){
            return binaryRecursion(arr,tar,st, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){

    vector<int> arr={-1,0,3,4,5,9,12};
    int tar1 = 0;
    cout<<binaryRecursion(arr,tar1,0,arr.size()-1)<<endl;
    return 0;
}     

// ======================================================================
//                             OUTPUT
// ======================================================================
//                             1
// ======================================================================



// Another changes..........................

// Binary Search with Recursion
#include<iostream>
#include<vector>
using namespace std;

int binaryRecursion(vector<int> arr,int tar, int st, int end){

    if(st <= end){

        int mid = st +(end - st) / 2;
        if(tar > arr[mid]){
            return binaryRecursion(arr,tar,mid+1,end);
        }
        else if(tar < arr[mid]){
            return binaryRecursion(arr,tar,st, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){

    vector<int> arr={-1,0,3,4,5,9,12};
    int tar1 = 0;
    cout<<binaryRecursion(arr,tar1,0, arr.size() - 1)<<endl;
    return 0;
}     
