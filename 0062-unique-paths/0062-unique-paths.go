func uniquePaths(m int, n int) int {
    dp := make([][]int, m)
    for c := range dp {
        dp[c] = make([]int, n)
    }
    for r := 0; r < m; r++ {
        dp[r][0] = 1
    }
    for c := 0; c < n; c++ {
        dp[0][c] = 1
    }
    for r := 1; r < m; r++ {
        for c := 1; c < n; c++ {
            dp[r][c] = dp[r-1][c] + dp[r][c-1]
        }
    }
    return dp[m-1][n-1]
}