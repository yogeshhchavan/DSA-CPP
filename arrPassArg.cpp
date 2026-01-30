#include<iostream>
#include <climits>
using namespace std;

void chageArg(int arr[], int size){
    cout<<"Inside Function\n";
    for(int i =0; i<size; i++){
        arr[i] = 2*arr[i];
    }
}
int main(){
    int arr[]={1,2,3};
    chageArg(arr,3);
    cout<<"Inside Main\n";
    for(int i =0; i<3; i++){   //2 4 6
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}

// ========================================================================================================
//                                       OUTPUT
// ========================================================================================================
    
//                                     Inside Function
//                                     Inside Main
    //                                 2 4 6
