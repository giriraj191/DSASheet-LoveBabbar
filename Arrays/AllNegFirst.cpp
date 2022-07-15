// Problem :: Array: All Negative Elements First
// Link: https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

// Source Code:

// Dutch National Flag Algorithm
void rearrangeArray(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    while(left < right) {
        if(arr[left] < 0) {
            left++;
        } else if(arr[right] > 0) {
            right--;
        } else {
            swap(arr[left], arr[right]);
        }
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)

// Maintaining Order of Appearance
void rearrangeArrayInsertionMethod(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
 
        // if current element is positive do nothing
        if (key > 0)
            continue;
        
        // Inserting negative element at correct position by shifting elements one place right
        j = i - 1;
        while (j >= 0 && arr[j] > 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
 
        // Put negative element at its right position
        arr[j + 1] = key;
    }
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Done by GIRIRAJ :)