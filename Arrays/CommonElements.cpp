// Problem :: Array: Find the elements that are common in all three sorter arrays.
// Link: https://practice.geeksforgeeks.org/problems/common-elements1132/1
// Source Code:


// Note: It can be done using extra space for set. space Complexity O(n)
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3) {
            int i = 0, j = 0, k = 0;
            int pi, pj, pk;               // Storing previous Element to avoid duplicates 
                                          // being sorted helping in tracking duplicates
            pi = pj = pk = INT_MIN;
            
            vector<int> result;
            
            while(i < n1 && j < n2 && k < n3) {
                while(A[i] == pi && i < n1) i++;
                while(B[j] == pj && j < n2) j++;
                while(C[k] == pk && k < n3) k++;
                
                if(A[i] == B[j] && B[j] == C[k]) {
                    result.push_back(A[i]);
                    pi = A[i];
                    pj = B[j];
                    pk = C[k];
                    i++; j++; k++;
                    
                } else if(A[i] <= B[j] && A[i] <= C[k]) {
                    pi = A[i];
                    i++;
                    
                } else if(B[j] <= C[k] && B[j] <= A[i]) {
                    pj = B[j];
                    j++;
                    
                } else {
                    pk = C[k];
                    k++;
                }
            }
            
            return result;
        }

};

// Time Complexity: O(n1 + n2 + n3) // worst case
// Space Complexity: O(1)

// Done by GIRIRAJ :)