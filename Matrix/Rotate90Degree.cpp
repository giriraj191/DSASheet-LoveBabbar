// Problem :: Matrix: 
// Link: 
// Source Code:

// Note: Observe the pattern
// for Matrix Indices: 0,0  0,1  0,2            after 90 degree rotation: 2,0  1,0  0,0
//                     1,0  1,1  1,2                                      2,1  1,1  0,1                                     
//                     2,0  2,1  2,2                                      2,2  1,2  0,2

// In any row, for every decreasing row index i, there exists a constant column index j, such that j = current_row_index. 

void rotate90Clockwise(int arr[N][N]) {
    for (int j = 0; j < N; j++) {
        for (int i = N - 1; i >= 0; i--)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

// Time Complexity: O(n * 2)
// Space Complexity: O(1)

// OR

// Transpose the matrix and reverse each row :)

void rotate90clockwise(int mat[n][n]) {
    // Transpose of matrix
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(mat[i][j], mat[j][i]);

    // Reverse individual rows
    for (int i = 0; i < n; i++) {
        int low = 0, high = n - 1;
        while (low < high) {
            swap(mat[i][low], mat[i][high]);
            low++; high--;
        }
    }
}

// Time Complexity: O(n * 2)
// Space Complexity: O(1)

// Done by GIRIRAJ :)