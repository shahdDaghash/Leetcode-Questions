//time limit solution
//time: O(N^2)
//space: O(N)

class Solution {
public:
    /*
    buy sell buy sell
    */
    int solve(vector<int>& prices, int day, int transactionsLeft){
        if(day == prices.size() || transactionsLeft == 0){
            return 0;
        }
        
        //no transaction day
        int ans1 = solve(prices, day + 1, transactionsLeft);
        
        //do a transaction
        bool buy = (transactionsLeft % 2 == 0);
        int ans2;
        if(buy == true){ //buy
            ans2 = -prices[day] + solve(prices, day + 1, transactionsLeft - 1);
        }
        else{ //sell
            ans2 = prices[day] + solve(prices, day + 1, transactionsLeft - 1);
        }
        
        return max(ans1, ans2);
    }
    
    
    int maxProfit(vector<int>& prices) {
        return solve(prices, 0, 4);
    }
};


//same solution but with memo
//time: O(N)
//space: O(N)

class Solution {
public:
    /*
    buy sell buy sell
    */
    int solve(vector<int>& prices, int day, int transactionsLeft, vector<vector<int>>& memo){
        if(day == prices.size()){
            return 0;
        } 
        if ( transactionsLeft == 0){
            return 0;
        }
        
        int &ans = memo[day][transactionsLeft];
        
        if(ans != -1){
            return ans;
        }
        
        //no transaction day
        int ans1 = solve(prices, day + 1, transactionsLeft, memo);
        
        //do a transaction
        bool buy = (transactionsLeft % 2 == 0);
        int ans2 = 0;
        if(buy == true){ //buy
            ans2 = -prices[day] + solve(prices, day + 1, transactionsLeft - 1, memo);
        }
        else{ //sell
            ans2 = prices[day] + solve(prices, day + 1, transactionsLeft - 1, memo);
        }
        
        return ans = max(ans1, ans2);
    }
    
    
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> memo (prices.size(), vector<int>(5, -1));
        return solve(prices, 0, 4, memo);
    }
};

