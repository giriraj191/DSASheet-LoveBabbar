// Problem :: Array: K-th Smallest Element
// Link: https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

// Source Code:

// Note: We can use sorting to reduce space complexity but it will increase Time Complexity 
//       Sorting Technique: Time Complexity: O(nlogn) Space Complexity: O(1)

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq;
        int size = r - l + 1;
        
        for(int i = 0; i < size; i++) {
            pq.push(arr[i]);
            if(pq.size() > k) pq.pop();
        }
        
        return pq.top();
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)

// Done by GIRIRAJ :)