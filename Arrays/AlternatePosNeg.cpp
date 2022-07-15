// Problem :: Array: Alternate Positive and Negative Elements in Array Order doesn't matter
// Link: https://www.geeksforgeeks.org/rearrange-array-in-alternating-positive-negative-items-with-o1-extra-space-set-2/
// Source Code:

void rearrange(int arr[], int n)
{
    int i = 0, j = n-1;
 
    // Dutchman flag Algorithm
    while (i < j) {
        while (i <= n - 1 and arr[i] > 0)
            i += 1;
        while (j >= 0 and arr[j] < 0)
            j -= 1;
        if (i < j )
            swap(arr[i], arr[j]);
    }
    
    // i has last index saved
    if (i == 0 || i == n)
        return;
    // start with first positive element at index 0
    // Rearrange array in alternating positive & negative items
    int k = 0;
    while (k < n && i < n ) {
        // swap next positive element at even position from next negative element.
        swap(arr[k], arr[i]);
        i = i + 1;
        k = k + 2;
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)