// Problem :: Array: Sort 0 1 2 in ascending order without using extra space.
// Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0

// Source Code:

class Solution {
    public:
    void sort012(int arr[], int n) {
        int zero = 0;
        int two = n - 1;
        int index = 0;
        while(index <= two) {
            if(arr[index] == 0) {
                swap(arr[index], arr[zero]);
                zero++;
                index++;
                
            } else if(arr[index] == 2) {
                swap(arr[index], arr[two]);
                two--;
                
            } else {
                index++;
            }
        }
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)