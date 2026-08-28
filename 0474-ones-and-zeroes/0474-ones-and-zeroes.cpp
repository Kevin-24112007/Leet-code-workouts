class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1, 0));
        for(auto s : strs) {
            int zero = count(s.begin(), s.end(), '0');
            int one = s.size() - zero;
            for(int z = m; z >= zero; z--) {
                for(int o = n; o >= one; o--) {
                    dp[z][o] = max(dp[z][o], dp[z-zero][o-one]+1);
                }
            }
        }
        return dp[m][n];
    }
};