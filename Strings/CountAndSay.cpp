// Problem :: Strings: Count and Say Strings Problem
// Link: https://leetcode.com/problems/count-and-say/
// Source Code:

class Solution {
public:
    string countAndSay(int n) {

        // step1: base case
        if(n == 1) return "1";

        // making recursion to bring the final filled string -- step2: recurrsion doing small problem
        string s = countAndSay(n - 1);
        
        // step3: performing final calculation :)
        int count = 1;
        int i = 1;
        
        string answer = "";
        
        while(i <= s.length()) {
            if(i < s.length() && s[i - 1] == s[i]) {
                count++;
                
            } else {
                answer += to_string(count) + s[i - 1];
                count = 1;
            }
            i++;
        }
        
        return answer;
    }
};

// Time Complexity: O(n ^ 2) // worst case or Upper Bound
// Space Complexity: O(n) // ignoring call stack

// Done by GIRIRAJ :)