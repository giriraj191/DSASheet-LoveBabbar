// Problem :: Array: Maximum Product Subarray
// Link: https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
// Source Code:

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long result = arr[0], maxi = 1, mini = 1;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] == 0) {
	            maxi = 1;
	            mini = 1;
	            continue;
	        }
	        long long product = arr[i] * maxi;
	        
	        // Taking arr[i] bcoz there may be the case when maxi and mini have same sign 
	        // therefore it will give wrong answer in case of 0 or in starting of algo 
	        // therefore we have to take arr[i] in account also.
	        
	        maxi = max(product, max(mini * arr[i], (long long) arr[i]));
	        mini = min(product, min(arr[i] * mini, (long long) arr[i]));
	        result = max(result, maxi);
	        
	    }
	    return result;
	}
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)