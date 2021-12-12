class Solution {
public:
    
    int solve(int i, int j, vector<vector<char>>& matrix, vector<vector<int>>& dp){
        int r = matrix.size();
        int c = matrix[0].size();
        
        if(i >= r || j>=c){
            return 0;
        }
        
        if(dp[i][j]==-1){
            int right, down, diag;
            right = solve(i, j+1, matrix, dp);
            down = solve(i+1, j, matrix, dp);
            diag = solve(i+1, j+1, matrix, dp);
            
            dp[i][j] = 0;
            if(matrix[i][j]=='1'){
                dp[i][j] = 1 + min(right, min(down, diag));
            }
            
        }
        
        return dp[i][j];
    }
    
    int maximalSquare(vector<vector<char>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        vector<vector<int>> dp(r, vector<int> (c,-1));
        
        int maxLength = 0;
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                maxLength = max(maxLength, solve(i, j, matrix, dp));
            }
        }
        
        return maxLength*maxLength;
    }
};
