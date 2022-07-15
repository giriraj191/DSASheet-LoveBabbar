// Problem :: Array: Merge Two Sorted Arrays without using Extra Space
// Link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1

// Source Code:

// Approach 1: All small in smaller then Sorting two pointer sandwich
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int front = 0;      // for arr2
	    int back = n - 1;   // for arr1
	    
	    // Fill all small elements in small array
	    while(front < m && back >= 0) {
	        if(arr1[back] > arr2[front]) {
	            swap(arr1[back], arr2[front]);
	        }
	        front += 1;
	        back -= 1;
	    }
	    
	    // Sort both arrays
	    sort(arr1, arr1 + n);
	    sort(arr2, arr2 + m);
	}
};

// Time Complexity: O(nlogn)
// Space Complexity: O(1)

// Done by GIRIRAJ :)