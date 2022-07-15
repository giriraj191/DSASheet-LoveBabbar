// Problem :: Array: Three way partitioning
// Link: https://practice.geeksforgeeks.org/problems/three-way-partitioning/1
// Source Code:

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    
    // one way is sorting but that costs nlogn time
    
    void threeWayPartition(vector<int>& array,int a, int b) {
        int lo = 0;
        int hi = array.size() - 1;
        int index = 0;
        
        while(index <= hi) {
            if(array[index] < a) {
                swap(array[index], array[lo]);
                lo++;
                index++;
                
            } else if(array[index] > b) {
                swap(array[index], array[hi]);
                hi--;
                
            } else {
                index++;
            }
        }
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)