// Problem :: Matrix: Common elements in all rows of a given matrix
// Link: https://www.geeksforgeeks.org/common-elements-in-all-rows-of-a-given-matrix/
// Source Code:

// Note: The idea is to use map and increase count of particular element if it is found in row and increament only if it is found in 
// current row

void printCommonElements(int mat[M][N]) {
    unordered_map<int, int> commonElements;
 
    // initialize 1st row elements with value 1
    for (int j = 0; j < N; j++)
        commonElements[mat[0][j]] = 1;
 
    for (int i = 1; i < M; i++) {
        for (int j = 0; j < N; j++) {
            // If element is present in the map and is not duplicated in current row.
            if (commonElements[mat[i][j]] == i) {
               // we increment count of the element in map by 1
                commonElements[mat[i][j]] = i + 1;
 
                // If this is last row only print common elements
                if (i==M-1 && commonElements[mat[i][j]]==M)
                  cout << mat[i][j] << " ";
            }
        }
    }
}

// Time Complexity: O(m * n)
// Space Complexity: O(m * n)

// Done by GIRIRAJ :)