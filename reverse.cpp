#include<iostream>
using namespace std;

void reversArray(int arr[], int size){
    int st =0;
    int end= size -1;
    while(st<end){
        swap(arr[st], arr[end]);
    st++;
    end--;
    }
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size =7;

   for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    reversArray(arr, size);
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    return 0;
  // ===========================================================
  //                         OUTPUT
  // ===========================================================
  //                         4 2 7 8 1 2 5 
  //                         5 2 1 8 7 2 4
  // ===========================================================

}
