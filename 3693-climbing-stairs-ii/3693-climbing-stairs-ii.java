class Solution {
    public int climbStairs(int n, int[] costs) {
        long[] dp = new long[n+1];
        Arrays.fill(dp, Long.MAX_VALUE);
        dp[0] = 0;
        for(int idx = 1; idx <= n; idx++) {
            for(int in = 1; in <= 3; in++) {
                int i = idx - in;
                if(i >= 0) {
                    long j = (long)(idx - i) * (idx - i);
                    dp[idx] = Math.min(dp[idx], dp[i]+costs[idx-1]+j);
                }
            }
        }
        return (int)dp[n];
    }
}