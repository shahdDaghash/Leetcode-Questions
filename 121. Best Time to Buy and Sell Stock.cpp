class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1, maxP = 0;
        while(right<prices.size()){
            int currProfit = prices[right]- prices[left];
            maxP = max(maxP, currProfit);
            if(prices[right]<prices[left]){
                left = right;
            }
            right++;
        }
        return maxP;
    }
};
