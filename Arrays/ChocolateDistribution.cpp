// Problem :: Array: Chocolate Distribution Problem 
// Link: https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
// Source Code:

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        
        long long difference = INT_MAX;
        long long i = 0; 
        long long j = m - 1;
        while(j < n) {
            difference = min(difference, a[j] - a[i]);
            i++; j++;
        }
        return difference;
    }   
};

// Time Complexity: O(nlog(n))
// Space Complexity: O(1)

// Done by GIRIRAJ :)