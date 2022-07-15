// Problem :: Array: Smallest subarray with sum greater than x
// Link: https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1
// Source Code:

class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x) {
        int i = 0; 
        int j = 0; 
        int window = n;
        int sum = 0;
        
        // Sliding Window
        while(j < n) {
            if(arr[j] > x) return 1;
            sum += arr[j];
            if(sum > x) {
                while(sum > x) {
                    window = min(window, j - i + 1);
                    sum -= arr[i];
                    i++;
                }
            }
            j++;
        }
        return window;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)