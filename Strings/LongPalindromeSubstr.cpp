// Problem :: Strings: Longest Palindrome in a String
// Link: https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1#
// Source Code:


// Note: There exists a dp approach also you must check it out, below is greedy approach :)
class Solution {
  public:
    string longestPalin (string S) {
        if(S.size() == 1) return S;
        int length = 0;
        string answer = "";
        
        for(int i = 0; i < S.size(); i++) {
            int left = i; 
            int right = i;
            
            // Odd length Palindrome
            while(left >= 0 && right < S.size() && S[left] == S[right]) {
                if((right - left + 1) > length) {
                    length = (right - left + 1);
                    answer = S.substr(left, length);
                }
                left--; 
                right++;
            }
            
            // Even length Palindrome
            left = i;
            right = i + 1;
            while(left >= 0 && right < S.size() && S[left] == S[right]) {
                if((right - left + 1) > length) {
                    length = (right - left + 1);
                    answer = S.substr(left, length);
                }
                left--; 
                right++;
            }
        }
        
        return answer;
    }
};

// Time Complexity: O(n ^ 2)
// Space Complexity: O(1) // ignoring returning result 

// Done by GIRIRAJ :)