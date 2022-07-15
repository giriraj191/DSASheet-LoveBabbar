// Problem :: Matrix:  Search a 2D Matrix
// Link: https://leetcode.com/problems/search-a-2d-matrix/
// Source Code:

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0; 
        int end = matrix.size() * matrix[0].size() - 1;
        int mid, row, col;
        
        while(start <= end) {
            mid = (start + end) / 2;
            row = mid / matrix[0].size();
            col = mid % matrix[0].size();
            
            if(matrix[row][col] == target) {
                return true;
            } else if(matrix[row][col] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        return false;
    }
};

// Time Complexity: O(log(m * n))
// Space Complexity: O(1)

// Done by GIRIRAJ :)