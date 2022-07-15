// Problem :: Strings: Check final string is well shuffled of string 1 and string 2
// Link: https://www.programiz.com/java-programming/examples/check-valid-shuffle-of-strings
// Source Code:

// Note: This problem can be solved in O(n * log(n)) time using sorting but I prefer O(n) time although it is using extra space.
bool checkShuffle(string &str1, string &str2, string &str3) {
    if(str1.size() + str2.size() != str3.size()) return false;
    unordered_map<char, int> s1;
    unordered_map<char, int> s2;
    unordered_map<char, int> s3;

    for(int i = 0 ; i < str1.size(); i++) 
        s1[str1[i]]++;
    
    for(int i = 0 ; i < str2.size(); i++) 
        s2[str2[i]]++;
    
    for(int i = 0 ; i < str3.size(); i++) 
        s3[str3[i]]++;

    for(auto itr: s3) {
        if(s1.count(itr.first) == 0 && s2.count(itr.first) == 0) return false;
        else {
            if(s1[itr.first] + s2[itr.first] != itr.second) return false;
        }
    }
    return true;
}

// Time Complexity: O(max(n1, n1, n3))
// Space Complexity: O(max(n1, n2, n3))

// Done by GIRIRAJ :)