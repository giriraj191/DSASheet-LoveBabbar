// Problem :: Array: Alternate Positive and Negative Elements in Array Order matters
// Link: https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/
// Source Code:

void rightrotate(int arr[], int n, int outofplace, int cur) {
    char tmp = arr[cur];
    for (int i = cur; i > outofplace; i--)
        arr[i] = arr[i - 1];
    arr[outofplace] = tmp;
}
 
void rearrange(int arr[], int n) {
    int outofplace = -1;
    for (int index = 0; index < n; index++) {
        if (outofplace >= 0) {
            if (((arr[index] >= 0) && (arr[outofplace] < 0)) || ((arr[index] < 0) && (arr[outofplace] >= 0))) {
                rightrotate(arr, n, outofplace, index);

                // next outofplace index
                // if opp sign found at next then swaped and outofplace = -1
                // if opp sign found at next + 1 same sitution 
                // if > 2 then it means same sign elements present more than 2 times continues therefore 
                // outofplace += 2;

                if (index - outofplace >= 2)
                    outofplace = outofplace + 2;
                else
                    outofplace = -1;
            }
        }
         
        if (outofplace == -1) {
            // check if current entry is out-of-place
            if (((arr[index] >= 0) && (!(index & 0x01))) || ((arr[index] < 0) && (index & 0x01))) {
                outofplace = index;
            }
        }
    }
}

// Time Complexity: O(N^2)
// Space Complexity: O(1)

// Done by GIRIRAJ :)