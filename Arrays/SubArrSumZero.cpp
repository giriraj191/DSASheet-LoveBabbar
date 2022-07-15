// Problem :: Array: Subarray with 0 sum 
// Link: https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
// Source Code:

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n) {
        unordered_map<int, int> sumTracker;
        int sum = 0; 
        int target = 0;
        int length = 0;
        for(int i = 0; i < n; i++) {
            sum += arr[i];
            if(sum == 0) {
                length = max(length, i + 1);
                return true;
            }
            // If same sum repeats it means subarray with target sum present
            // a = 5
            // b = ?
            // Total(a + b) = 5 again Hence, b = 0
            if(sumTracker.find(sum - target) != sumTracker.end()) {
                length = max(length, i - sumTracker[sum - target]);
                return true;
            }
            sumTracker[sum] = i;
        }
        return false;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)

// Done by GIRIRAJ :)