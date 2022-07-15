// Problem :: Array: Find Maximum Sum Contiguous SubArray
// Link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

// Source Code:

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long result = -1e9 - 7;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            sum += arr[i];
            result = max(result, sum);
            if(sum < 0) sum = 0;
        }
        return result;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)