func numberOfLines(widths []int, s string) []int {
    count, lines := 0, 1;
    N := len(s)
    for i := 0; i < N; i++ {
        count += widths[s[i]-'a']
        if count > 100 {
            lines++
            i--
            count = 0
        }
    }
    return []int{lines,count}
}