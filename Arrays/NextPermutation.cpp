// Problem :: Array: Find next permutaion of the given array
// Link: https://leetcode.com/problems/next-permutation/

// Source Code:

// Use the increasing from backwards property of lexicographical arrays/dictionary
// Find Peak 
// swap peak's left element with element > peak's left in backward increasing array from last
// reverse in order to obtain smaller next Permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1) return;
        int first, second;
        for(first = nums.size() - 2; first >= 0; first--) {
            if(nums[first] < nums[first + 1]) break;
        }
        if(first < 0) {
            reverse(nums.begin(), nums.end());
            return; 
        }        
        for(second = nums.size() - 1; second >= 0; second--) {
            if(nums[first] < nums[second]) break;
        }
        swap(nums[first], nums[second]);
        reverse(nums.begin() + first + 1, nums.end());
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)