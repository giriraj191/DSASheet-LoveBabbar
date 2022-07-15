// Problem :: Array: Find Duplicate in Array
// Link: https://leetcode.com/problems/find-the-duplicate-number/

// Source Code:

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // Only good when duplicate number is present only once and all numbers are present
        // int XOR = 0;
        // for(int i = 1; i < nums.size(); i++) {
        //     XOR ^= nums[i - 1] ^ i;
        // }
        // XOR ^= nums[nums.size() - 1];
        // return XOR;
        
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            nums[nums[i] % size] += size;
        }
        
        int result = 0;
        for(int i = 0; i < size; i++) {
            if(nums[i] / size > 1)  result = i;
            nums[i] = nums[i] % size;
        }
        return result;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)