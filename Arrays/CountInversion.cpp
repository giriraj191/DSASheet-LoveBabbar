// Problem :: Array: Count Inversion -- How far array from sorted
// Link: https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

// Source Code:

class Solution{
  public:
    void merge(long long int arr[], long long int l, long long int mid, long long int r, long long int &count) {
        long long int i = l;
        long long int j = mid + 1;
        long long int index = l;
        long long int temp[r+1];
        
        while(i <= mid && j <= r) {
            if(arr[i] > arr[j]) {
                count += mid - i + 1;
                
                temp[index++] = arr[j++];
            } else {
                temp[index++] = arr[i++];
            }
        }
        
        while(j <= r) temp[index++] = arr[j++];
        while(i <= mid) temp[index++] = arr[i++];
        
        for(long long int i = l; i <= r; i++) {
            arr[i] = temp[i];
        }
    }   
    void mergeSort(long long int arr[], long long int l, long long int r, long long int &count) {
        if(l >= r) return;
        long long int mid = (l + r) / 2;
        mergeSort(arr, l, mid, count);
        mergeSort(arr, mid + 1, r, count);
        merge(arr, l, mid, r, count);
    }   
    long long int inversionCount(long long int arr[], long long int N) {
        long long int count = 0;
        mergeSort(arr, 0, N - 1, count);
        return count;
    }

};

// Time Complexity: O(nlog(n))
// Space Complexity: O(n)

// Done by GIRIRAJ :)