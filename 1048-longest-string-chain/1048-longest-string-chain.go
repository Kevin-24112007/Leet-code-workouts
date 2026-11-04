func longestStrChain(words []string) int {
    sort.Slice(words, func(i, j int) bool{
        return len(words[i]) < len(words[j])
    })
    dp := make(map[string] int)
    maxVal := 0
    for _, word := range words{
        dp[word] = 1
        for i := 0; i < len(word); i++{
            prev := word[:i] + word[i+1:]
            if val, exist := dp[prev]; exist{
                dp[word] = max(dp[word], val+1)
            }
        }
        if maxVal < dp[word]{
            maxVal = dp[word]
        }
    }
    return maxVal
}