// Problem :: Array: Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers
// Link: https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
// Source Code:

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N) {
        int answer = 1;
        int count = 1;
        unordered_set<int> check;
        
        for(int i = 0; i < N; i++) {
            check.insert(arr[i]);
        }
        
        for(int i = 0; i < N; i++) {
            // check only for starting rest skipped 
            if(check.find(arr[i] - 1) != check.end()) {
                continue;
            } else {
                int number = arr[i];
                count = 1;
                while(check.find(number + 1) != check.end()) {
                    number += 1;
                    count += 1;
                }
                answer = max(count, answer);
            }
        }
        
        return answer;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)

// Done by GIRIRAJ :)