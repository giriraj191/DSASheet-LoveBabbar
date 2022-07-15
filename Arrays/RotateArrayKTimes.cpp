// Problem :: Array: Rotate Array K Times
// Link: https://leetcode.com/problems/rotate-array/

// Source Code:

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // GCD Method but without calculation of GCD by using moves < length :)
        k = k % nums.size();
        if(!k) return;
        
        int set = 0; 
        int moves = 0;
        
        while(moves < nums.size()) {
            int current = set;
            int hold = nums[set];
            while(1) {
                int next = (current + k) % nums.size();
                int temp = nums[next];
                nums[next] = hold;
                hold = temp;
                current = next;
                moves++;
                
                if(current == set) break;
            }
            set++;
        }
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// OR

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if(!k) return;
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)