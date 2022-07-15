// Problem :: Matrix: Print the Row - Column - Sorted Matrix in sorted Manner
// Link: https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1
// Source Code:

// create a class to store elements and their index values
class MinHeapNode {
    public:
        int element;
        int rowIndex;
        int colIndex;
};


// Algorithm:
// 1. create a min priority queue(pq) of type MinHeapNode.
// 2. store the first row of matrix in pq.
// 3. pop the smallest element and store it in output array & push element next to popedElement with (row + 1, col).
// 4. if row + 1 out of bound don't push the element just skip.
// 5. Traverse through all matrix and repeat the same steps.



// Time Complexity: O(n * m * log(m))
// Space Complexity: O(n * m) 

// Done by GIRIRAJ :)