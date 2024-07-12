class Solution {
public:
    int maxProfit(vector<int>& prices) {
       // take a variable mini which will store the minimum element
       // take a variable max_profit which will store the max profit
       // calculate the max_profit using current element and mini element
        int mini = INT_MAX;
        int max_profit = 0;
        for(int i=0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            max_profit = max(prices[i]-mini,max_profit);
        }

        return max_profit;
    }
};