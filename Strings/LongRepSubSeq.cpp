// Problem :: Strings: Longest Repeating Subsequence
// Link: https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1
// Source Code:

// Thought Process: :)
// 1. Bascially we don't need same char more than 2 times.
// 2. Thus it will eliminate all characters that occuring only once and From here we got the idea of LCS
// 3. compare string with itself and eliminate those characters which occuring at same index, this will eliminate Step 2 members
// 4. Also if characters repeating > 2X then still same pairs will not considered and therefore we only get cross matched strings.
// 5. Thus, modify the LCS code and use same string for comparision 

// Note: dp Solution, You must know LCS problem to understand this :)
// First think of Recurrsion --> Memoization --> dp(given below)
class Solution {
	public:
		int LongestRepeatingSubsequence(string str) {
		    int size = str.size();
		    int dp[size + 1][size + 1];
		    memset(dp, 0, sizeof(dp)); // can only fill values -1 and 0
		    
		    for(int i = 1; i <= size; i++) {
		        for(int j = 1; j <= size; j++) {
		            if(str[i - 1] == str[j - 1] && i != j) {
		                dp[i][j] = dp[i - 1][j - 1] + 1;
		                
		            } else {
		                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		            }
		        }
		    }
		    
		    return dp[size][size];
		}
};

// Time Complexity: O(n ^ 2)
// Space Complexity: O(n ^ 2)

// Done by GIRIRAJ :)