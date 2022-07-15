// Problem :: Array: Mininmum Number of Jumps to reach End
// Link: https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#

// Source Code:

class Solution{
  public:
    int minJumps(int arr[], int n){
        int jumps = 0;
        int maxReach = 0;
        int right = 0;
        
        // left travelling to calculate maxReach it can achive in given slot when it reaches to right 
        // it means it has maxReach answer of that slot therefore it jumps and recalculate maxReach for that slot : )
        for(int left = 0; left < n - 1; left++) {
            maxReach = max(maxReach, arr[left] + left);
            
            if(left == right) {
                jumps++;
                right = maxReach;
            }
            if(right >= n - 1){
                break;
            }
        }
        
        if(right < n - 1) {
            return -1;
        }
        return jumps;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)
