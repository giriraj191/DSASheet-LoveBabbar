// Problem :: Matrix: Median in a row-wise sorted Matrix
// Link: https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
// Source Code:

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        int left = INT_MAX;
        int right = INT_MIN;
        
        // finding the range for the median
        // median will be present in this range only
        for(int i = 0; i < r; i++) {
            if(matrix[i][0] < left) left = matrix[i][0];
            if(matrix[i][c - 1] > right) right = matrix[i][c - 1];
        }
        
        // no of values must be small then median 
        // if size = 11 then 5 values must be smaller than median
        int baseValue = (r * c + 1) / 2;
        
        while(left < right) {
            int mid = left + (right - left) / 2;
            int count = 0;
            
            // Counting no of values less than median 
            // if baseValue found still 2 cases:
            // 1. value Found: then right will be there and force left to reach it
            // 2. value not present in matrix: then when left approaches right it creates condition
            //    that will force right to move to correct position
            
            for(int i = 0; i < r; i++) {
                // as upper_bound returns the iterator therefore we have to subtract first address
                count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            
            if(count < baseValue) {
                left = mid + 1;
                
            } else {
                right = mid;
            }
        }
        
        return left;
    }
};

// Time Complexity: O(n * log(m))
// Space Complexity: O(1)

// Done by GIRIRAJ :)