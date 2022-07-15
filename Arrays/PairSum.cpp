// Problem :: Array: Count the Number of pairs equal to given Sum
// Link: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
// Source Code:

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // Appraoch 1: Sort and the User Sandwich 2 Pointer
        // Approach 2: Use map 
        unordered_map<int, int> freq;
        for(int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        
        int count = 0;
        
        // Traverse in map instead of array
        for(auto itr: freq){
            int key = itr.first;
            if(freq.count(k - key) == 1 && freq[k - key] != 0) {
                // We need only combinations but this is case of identical and thus it will give
                // permutations also therefore divide by 2
                if(k - key == key){
                    count += (freq[k - key] * (freq[k - key] - 1)) / 2;
                    freq[key] = 0;
                } else {
                    count += freq[k - key] * freq[key];
                    freq[key] = 0;
                    freq[k - key] = 0;
                }
            }
        }
        
        return count;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)

// Done by GIRIRAJ :)