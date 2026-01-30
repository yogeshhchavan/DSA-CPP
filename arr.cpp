#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[6]={5,15,22,1,-15,24};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i =0; i<size; i++){
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }
    cout<<"Smallest Element is : "<<smallest<<endl;
    cout<<"Largest Element is : "<<largest<<endl;
    return 0;

}

// ================================================================================
//                           OUTPUT
// ================================================================================
//                       Smallest Element is : -15
//                       Largest Element is : 24

// =================================================================================
