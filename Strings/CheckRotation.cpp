// Problem :: Strings: A Program to check if strings are rotations of each other or not.
// Link: https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
// Source Code:

bool isOK(string &s1, string &s2, int indexFound) {
    for(int i=0; i < s2.size(); i++){
        if(s1[i]!=s2[(indexFound+i)%s2.size()]) return false;
    }
    return true;
}

bool checkString(string &s1, string &s2) {
    if(s1.size() != s2.size()) return false;
    vector<int> index;

    // storing index of first char of s1 in s2
    for(int i = 0; i < s2.size(); i++) {
        if(s2[i] == s1[0]) {
            index.push_back(i);
        }
    }

    bool answer = false;
    for(int i = 0; i < index.size(); i++) {
        answer = isOK(s1, s2, index[i]);
        if(answer) break;
    }

    return answer;
}

// Time Complexity: O(n ^ 2)
// Space Complexity: O(n) // this can be improve to O(1) by using single variable but for sake of simplicity I didn't do it :)

// Done by GIRIRAJ :)