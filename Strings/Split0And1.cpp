// Problem :: Strings: Split the binary string into substrings with equal number of 0s and 1s
// Link: https://practice.geeksforgeeks.org/problems/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/1/
// Source Code:

class Solution {
public:
    int maxSubStr(string str) {
        int zero = 0;
        int one = 0;
        int result = 0;
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == '0') zero++;
            else one++;
            
            if(zero == one) result++;
        }
        if(one != zero) return -1;
        return result;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)