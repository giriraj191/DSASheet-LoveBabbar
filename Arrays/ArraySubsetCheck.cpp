// Problem :: Array: Array Subset of another array
// Link: https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
// Source Code:

string isSubset(int a1[], int a2[], int n, int m) {
    if(m > n) return "No";
    unordered_map<int, int> count;
    for(int i = 0; i < n; i++) {
        count[a1[i]]++;
    }
    for(int i = 0; i < m; i++) {
        if(count.count(a2[i]) == 0 || count[a2[i]] <= 0) {
            return "No";
            
        } else {
            count[a2[i]]--;
        }
    }
    return "Yes";
}

// Time Complexity: O(n)
// Space Complexity: O(n)

// Done by GIRIRAJ :)