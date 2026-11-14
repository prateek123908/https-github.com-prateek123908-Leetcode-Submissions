class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        vector<int>bestBuy;
        for(int i=0;i<prices.size();i++){
           if(prices[i]<=mini){
            bestBuy.push_back(prices[i]);
            mini=prices[i];
           }
           else
           bestBuy.push_back(mini);
        }
        int maxi=0;
        for(int i=0;i<prices.size();i++){
           maxi=max(maxi,prices[i]-bestBuy[i]);
        }
        return maxi;

    }
};