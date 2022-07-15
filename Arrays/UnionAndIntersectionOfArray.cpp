// Problem :: Array: Find Union and Intersection of two arrays.
// Link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0
// Link: https://leetcode.com/submissions/detail/718041832/

// Source Code:

// Union of Array
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> seto;
        int count = 0;
        for(int i = 0; i < n; i++) {
            seto.insert(a[i]);
        }
        count += seto.size();
        for(int i = 0; i < m; i++) {
            if(seto.find(b[i]) == seto.end()) {
                seto.insert(b[i]);
                count++;
            }
        }
        return count;
    }
};

// Intersection of Array
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> kunu;
        vector<int> answer;
        for(int i = 0; i < nums1.size(); i++) {
            kunu.insert(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            if(kunu.find(nums2[i]) != kunu.end()) {
                answer.push_back(nums2[i]);
                kunu.erase(nums2[i]);
            }
        }
        return answer;
    }
};

// Time Complexity: O(m + n)
// Space Complexity: O(m + n) // worst case

// Done by GIRIRAJ :)