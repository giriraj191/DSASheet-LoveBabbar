// Problem :: Array: Best time to buy and sell stocks
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Source Code:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;
        int buy = prices[0];
        int sell = 0;
        int profit = 0;
        int i = 1;
        while(i < prices.size()) {
            sell = prices[i] - buy;
            profit = max(profit, sell);
            buy = min(buy, prices[i]);
            i++;
        }
        return profit;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

// Done by GIRIRAJ :)