// Problem :: Array: Factorials of large numbers 
// Link: https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1
// Source Code:

class Solution {
public:
    int multiply(int number, vector<int> &answer, int size) {
        int carry = 0;
        for(int i = 0; i < size; i++) {
            int value = answer[i] * number + carry;
            answer[i] = value % 10;
            carry = value / 10;
        }
        
        // why carry is bigger than 10 ?
        // b'coz Suppose we are multiplying 50 * 25
        // 5  0
        // 2  5 So, first 5 multiply with 0 and then with 5 and same goes for 2 
        // but here we are multiplying 25 directly to 0 and 5 thus faster calculation, and also
        // the number when multiplied remain in range too as it is multiplying by single digit no
        // of array
        
        // 5  0
        //   25 thus here 25 multiplied with 0 and then with 5
        //   therefore carry can go above 10
          
        // If still doubt try it on Notebook but treat i or number as single number 
        // 25 as a single number not 2 and 5
        
        while(carry) {
            answer.push_back(carry % 10);
            carry /= 10;
            size++;
        }
        
        return size;
    }
    
    vector<int> factorial(int N){
        vector<int> answer;
        answer.push_back(1);
        int size = 1;
        
        // Multiplying all Numbers i.e. Calculating Factorial
        for(int i = 2; i <= N; i++) {
            size = multiply(i, answer, size);
        }
        
        // Numbers Stored in Reverse Order
        reverse(answer.begin(), answer.end());
        return answer;
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Done by GIRIRAJ :)