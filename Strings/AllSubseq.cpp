// Problem :: Strings: Print all Subsequences
// Link: https://www.geeksforgeeks.org/print-subsequences-string/
// Source Code:

// Recursion
void printSubsequence(string input, string output) {
    if (input.empty()) {
        cout << output << endl;
        return;
    }
    printSubsequence(input.substr(1), output + input[0]);
    printSubsequence(input.substr(1), output);
}

// Time Complexity: O(2 ^ n)
// Space Complexity: O(1) // ignoring output printing
// Done by GIRIRAJ :)