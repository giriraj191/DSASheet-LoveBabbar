// Problem :: Matrix: 
// Link: 
// Source Code:

// Note: The idea is to fill dp in such a way that index (i, j) contains highest value from index (i, j) to (N - 1, N - 1)

int findMaxValue(int matrix[][N]) {
    int highest = INT_MIN;
    int dp[N][N];
    dp[N-1][N-1] = matrix[N-1][N-1];

    // filling max row
    int highest = matrix[N-1][N-1];
    for (int j = N - 2; j >= 0; j--) {
        if (matrix[N-1][j] > highest)
            highest = matrix[N - 1][j];
        dp[N-1][j] = highest;
    }

    // filling max col
    for (int i = N - 2; i >= 0; i--) {
        if (matrix[i][N - 1] > highest)
            highest = matrix[i][N - 1];
        dp[i][N - 1] = highest;
    }

    // applying DP
    for (int i = N-2; i >= 0; i--) {
        for (int j = N-2; j >= 0; j--) {
            // Update highest
            if (dp[i+1][j+1] - matrix[i][j] > highest)
                highest = dp[i + 1][j + 1] - matrix[i][j];
 
            // set dp (i, j)
            dp[i][j] = max(matrix[i][j], max(dp[i][j + 1], dp[i + 1][j]) );
        }
    }
 
    return highest;
}

// Time Complexity: O(n ^ 2)
// Space Complexity: O(n ^ 2)

// Done by GIRIRAJ :)