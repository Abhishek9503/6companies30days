class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans;
        int n=prices.size();
        int maxright=prices[n-1];
        int maxprofit=0;
        
        
        
        for(int i=n-2;i>=0;i--)
        {
            maxright=max(prices[i],maxright);
            maxprofit=max(maxprofit,maxright-prices[i]);        
        }
            return maxprofit;
    }
};