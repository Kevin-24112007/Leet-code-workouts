class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int R = grid.size(), C = grid[0].size();
        vector<vector<int>> dp(R+1,vector<int>(C+1,0));
        for(int r = 1; r <= R; r++) {
            for(int c = 1; c <= C; c++) {
                if(r-1 >= 1 && c-1 >= 1) {
                    dp[r][c] = grid[r-1][c-1] + min(dp[r-1][c], dp[r][c-1]);
                }
                else if(r-1 >= 1) { 
                    dp[r][c] = grid[r-1][c-1] + dp[r-1][c];
                }
                else if(c-1 >= 1) {
                    dp[r][c] = grid[r-1][c-1] + dp[r][c-1];
                }
                else {
                    dp[r][c] = grid[r-1][c-1];
                }
            }
        }
        return dp[R][C];
    }
};