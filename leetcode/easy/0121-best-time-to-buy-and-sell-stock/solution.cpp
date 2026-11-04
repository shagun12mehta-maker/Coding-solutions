class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0];
        int max_profit=0;
        int size=prices.size();
        for(int i=1;i<size;i++){
            bestbuy=min(bestbuy,prices[i]);
             max_profit=max(prices[i]-bestbuy,max_profit);
        }
        // max_profit=max(prices[i]-bestbuy,max_profit);
        
        return max_profit;

    }

};