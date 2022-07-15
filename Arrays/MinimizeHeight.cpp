// Problem :: Array: Minimize the Height in Array elements by inc or dec by k.
// Link: https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

// Source Code:

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        if(n == 1) return 0;
        sort(arr, arr + n);
        int diff = arr[n - 1] - arr[0];  // Min difference itna toh hai hi (if all inc by k)
        int maxOfArray = arr[n-1];
        int minOfArray = arr[0];
        
        for(int i = 0; i < n - 1; i++) {
            if(arr[i + 1] - k < 0) continue;  // basically doing arr[i] + k operation

            // Checking contionuos elements bcoz that will give the best solution
            // Eg. 1 2 3 for k = 2      (3 - k) - (1 + k)   OR  (2 - k) - (1 + k)  thus adjacent will give the optimal Answer
            
            // It ensures that 0 - i elements inc by k and i - n elements dec by k
            minOfArray = min(arr[i + 1] - k, arr[0] + k);
            // thus min element is either 0th + k or (i+1)th - k
            maxOfArray = max(arr[i] + k, arr[n - 1] - k);
            // and max element is either last - k or ith + k
            
            // ith + k element 0 - i elements ka max hoga or last + k element i - n elements ka max hoga
            // because 0 - i elements sorted and all inc by k 
            // and i - n elements sorted and all dec by k :)
            // Good Concepts Understand it carefully
            
            
            diff = min(diff, maxOfArray - minOfArray);
        }
        
        return diff;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)