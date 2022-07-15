// Problem :: Strings: Permutations of a given string 
// Link: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1#
// Source Code:

class Solution {
    void helper(string S, int l, int r, set<string> &answer) {
        if(l == r) 
            answer.insert(S);
        else {
            for(int i = l; i <= r; i++) {
                swap(S[l], S[i]);
                helper(S, l + 1, r, answer);
                // backtracking
                swap(S[l], S[i]);
            }
        }
    }
	public:
		vector<string>find_permutation(string S) {
		    set<string> answer;
		    vector<string> ans;
		    helper(S, 0, S.size() - 1, answer);
		    for(auto itr = answer.begin(); itr != answer.end(); itr++)
		        ans.push_back(*itr);
		    return ans;
		}
};

// If you wanna have fun there is a inbuilt function called next_permutation() you can call that over a loop :)

// Time Complexity: O(n * n!)
// Space Complexity: O(n)

// Done by GIRIRAJ :)