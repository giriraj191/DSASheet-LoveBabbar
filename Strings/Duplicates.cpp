// Problem :: Strings: Print all the duplicates in strings
// Link: https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
// Source Code:

// Note: we can use Sort() and then traverse through to string to find the duplicates but that will cost O(n * log(n)) time.

void duplicates(string str) {
    unordered_map<char, int> charCount;

    for (int i = 0; i < str.length(); i++) {
        charCount[str[i]]++;  
    }

    for (auto it : charCount) {   
        if (it.second > 1)   
            cout<<it.first << ", count = " << it.second << "\n";
    }
}

// Time Complexity: O(n)
// Space Complexity: O(n)

// Done by GIRIRAJ :)