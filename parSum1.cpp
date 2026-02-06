// // write program to Return pair in sorted array with target sum.
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSume(vector<int> nums, int target){
//     vector<int> ans;
//     int n =nums.size();
//     for(int i =0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {2,7,11,15};
//     int target = 9;
//     vector<int> ans = pairSume(nums, target);
//     cout<<"Pair is "<<ans[0]<<" and "<<ans[1]<<endl;
//     return 0;
// }

// Maximum SubArray Sum time complexity O(n).....
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSume(vector<int> nums, int target){
    vector<int> ans;
    int n =nums.size();
    
    int i = 0, j = n-1;
    while(i < j){
        int pairSume = nums[i] + nums[j];
        if(pairSume < target){
            i++;
        }
        else if(pairSume > target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 26;
    vector<int> ans = pairSume(nums, target);
    cout<<"Pair is "<<ans[0]<<" and "<<ans[1]<<endl;
    return 0;
}



// ====================================================================
//                           OUTPUT
// ====================================================================
        
//                         Pair is 2 and 3
// ====================================================================
