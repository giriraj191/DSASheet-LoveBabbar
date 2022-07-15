// Problem :: Array: Merge overlapping intervals into one
// Link: https://leetcode.com/problems/merge-intervals/

// Source Code:

// Sorting Interval will help : )
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> answer;
        if(intervals.size() == 0) return answer;
        sort(intervals.begin(), intervals.end());
        
        vector<int> temp = intervals[0];
        for(int i = 1; i < intervals.size(); i++) {
            if(temp[1] >= intervals[i][0]) {
                temp[1] = max(intervals[i][1], temp[1]);
                
            } else {
                answer.push_back(temp);
                temp = intervals[i];
            }
        }
        answer.push_back(temp);
        return answer;
    }
};

// Time Complexity: O(nlogn) // for sorting
// Space Complexity: O(n)

// Done by GIRIRAJ :)