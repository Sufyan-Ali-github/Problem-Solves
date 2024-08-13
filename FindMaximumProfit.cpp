class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minNum=prices[0];
        for(int i=0; i<prices.size(); i++){
            minNum=min(minNum,prices[i]);
            int profit=prices[i]-minNum;
            maxProfit=max(maxProfit,profit);

        }
        return maxProfit;
        
    }
};