#include <iostream>
#include <vector>
using namespace std;

int searchRotated(vector<int>& nums, int target) {
    int st = 0, end = nums.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target) {
            return mid; // Found target
        }

        // Left half is sorted
        if (nums[st] <= nums[mid]) {
            if (nums[st] <= target && target < nums[mid])
                end = mid - 1; // Search left half
            else
                st = mid + 1;   // Search right half
        }
        // Right half is sorted
        else {
            if (nums[mid] < target && target <= nums[end])
                st = mid + 1;   // Search right half
            else
                end = mid - 1;   // Search left half
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> nums = {3,4,5,6,7,0,1,2};
    int target = 0;

    int index = searchRotated(nums, target);
    cout << "Target " << target << " found at index: " << index << endl;

    return 0;
}


// ======================================================================================================
//                                                 OUTPUT
// ======================================================================================================
//                                             Target 0 found at index: 5
// ======================================================================================================  
