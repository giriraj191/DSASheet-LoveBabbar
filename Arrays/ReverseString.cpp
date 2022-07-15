// Problem :: Array: Reverse the String / Array
// Link: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

// Source Code:
string reverseWord(string str){
    long long  right = str.size() - 1;
    for(long long left = 0; left < str.size() / 2; left++, right--) {
        swap(str[left], str[right]);
    } 
    return str;
}

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