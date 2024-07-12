class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // if(prices.size() <=1){
        //     return 0;
        // }
        int mini = INT_MAX;
        int max_profit = 0;
        for(int i=0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            max_profit = max(prices[i]-mini,max_profit);
        }

        return max_profit;
    }
};