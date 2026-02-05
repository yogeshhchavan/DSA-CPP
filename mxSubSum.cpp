// Maximum SubArray Sum using Bruete Force Approch
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n = 7;
    int arr[]={3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;
    
    for(int st=0; st<n;st++){
        int currSum = 0;
        for(int ed = st; ed<n;ed++){
            currSum += arr[ed];
            maxSum = max(currSum, maxSum);
        }
    }
    cout<<"Max Sum is "<<maxSum<<endl;
    return 0;

}

// =============================================
//                     OUTPUT
// =============================================
//                     Max Sum is 15
// =============================================
