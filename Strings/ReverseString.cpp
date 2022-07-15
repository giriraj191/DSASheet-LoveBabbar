// Problem :: Strings: Reverse a String
// Link: https://leetcode.com/problems/reverse-string/
// Source Code:

class Solution {
public:
    void reverseString(vector<char>& s) {
        int j = s.size() - 1;
        int i = 0;
        while(i <= j) {
            char hold = s[i];
            s[i] = s[j];
            s[j] = hold;
            i++;
            j--;
        }
    }
};

// OR

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)