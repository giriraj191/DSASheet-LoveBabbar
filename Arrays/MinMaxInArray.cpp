// Problem :: Array: Find Minimum and Maximum in Array
// Link: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

// Source Code:

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> answer(INT_MAX, INT_MIN);
    for(int i = 0; i < n; i++) {
        answer.first = min(answer.first, a[i]);
        answer.second = max(answer.second, a[i]);
    }
    return answer;
}

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)