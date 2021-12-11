//dp top down with memory
class Solution {
public:
    
    
    int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& memo){
        if(i < 0 || j < 0){
            return INT_MAX;
        }
        if(i==0 && j==0){
            return grid[i][j];
        }
        
        if(memo[i][j]!= -1){
            return memo[i][j];
        }
        
        int cost = grid[i][j] + min(solve(i-1, j, grid, memo), solve(i, j-1, grid, memo));
        memo[i][j] = cost;
        
        return cost;
        
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> memo(m, vector<int>(n,-1));
        
        return solve(m-1, n-1, grid, memo);
    }
};






