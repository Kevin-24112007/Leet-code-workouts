func divisorGame(n int) bool {
    dp := make([]bool, n+1)
    dp[0], dp[1] = false, false
    for i := 2; i <= n; i++ {
        flag := true
        for j := 1; j < i; j++ {
            if i%j == 0 {
                if dp[i-j] {
                    flag = false
                    break
                }
                if !dp[i-j] {
                    flag = true
                    break
                }
            }
        }
        dp[i] = flag
    }
    return dp[n];
}