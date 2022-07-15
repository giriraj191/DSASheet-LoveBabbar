// Problem :: Array: Given an array of size n and a number k, find all elements that appear more than n/k times
// Link: https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/
// Source Code:

void morethanNbyK(int arr[], int n, int k) {
    int x = n / k;
    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }   

    for(auto i : freq) {
        if (i.second > x) {
            cout << i.first << endl;
        }
    }
}

// Time Complexity: O(n)
// Space Complexity: O(n)

// Done by GIRIRAJ :)