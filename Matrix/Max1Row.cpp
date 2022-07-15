// Problem :: Matrix: Row with max 1s
// Link: https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
// Source Code:

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int index = -1;
	    int j = m;
	    for(int i = 0; i < n; i++) {
	        while((j > 0) && (arr[i][j - 1] == 1)) {
	            index = i;
	            j--;
	        }
	        if(j == 0){
	            index = i;
	            break;
	        }
	    }
	    return index;
	}
};

// Time Complexity: O(n + m)
// Space Complexity: O(1)

// Done by GIRIRAJ :)