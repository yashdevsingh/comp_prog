class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0, r=1, profit=0;
        int maxP=0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                profit = prices[r]-prices[l];
                maxP=max(maxP, profit);
            }
            else l=r;
            r++;
        }
        return maxP;
    }
};