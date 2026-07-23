class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int R = grid.size(), C = grid[0].size();
        vector<vector<int>> dp(R,vector<int>(C,0));
        dp[0][0] = grid[0][0];
        for (int c = 1; c < C; c++) {
            dp[0][c] = dp[0][c-1] + grid[0][c];
        }
        for (int r = 1; r < R; r++) {
            dp[r][0] = dp[r-1][0] + grid[r][0];
        }
        for(int r = 1; r < R; r++) {
            for(int c = 1; c < C; c++) {
                dp[r][c] = grid[r][c] + min(dp[r-1][c],dp[r][c-1]);
            }
        }
        return dp[R-1][C-1];
    }
};