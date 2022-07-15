// Problem :: Matrix: Spirally traversing a matrix 
// Link: https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
// Source Code:

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) {
        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size() - 1;
        vector<int> res; 
        
        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {
                res.push_back(matrix[top][i]);
            }
            top++;
            
            for(int i = top; i <= bottom; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;
            
            // if bottom crossed top then this will not run 
            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            // if right crossed left then this will not run
            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        
        return res;
    }
};

// Time Complexity: O(n * m)
// Space Complexity: O(n * m)

// Done by GIRIRAJ :)