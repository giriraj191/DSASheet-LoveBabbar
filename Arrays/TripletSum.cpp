// Problem :: Array: Triplet Sum in Array
// Link: https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
// Source Code:

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X) {
        sort(A, A + n);
        int i, j, index = 0;
        while(index < n) {
            i = index + 1; 
            j = n - 1;
            int checkSum = X - A[index];
            while(i < j) {
                if((checkSum - A[i] - A[j]) == 0) {
                    return true;
                } else if((checkSum - A[i] - A[j]) > 0) {
                    i++;
                } else if((checkSum - A[i] - A[j]) < 0) {
                    j--;
                }
            }
            index++;
        }
        return false;
    }

};

// Time Complexity: O(n^2) actually (O(n^2 + nlog(n)))
// Space Complexity: O(1)

// Done by GIRIRAJ :)