// Problem :: Array: Check whether string is palindrome of not
// Link: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

// Source Code:

class Solution{
public:	
	int isPalindrome(string S) {
	    int left = 0, right = S.size() - 1;
	    while(left < right) {
	        if(S[left] != S[right]) return 0;
	        left++;
	        right--;
	    }
	    return 1;
	}

};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)