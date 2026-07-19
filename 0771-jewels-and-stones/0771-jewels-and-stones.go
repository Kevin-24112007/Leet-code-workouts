func numJewelsInStones(jewels string, stones string) int {
    freq := make(map[rune]int)
    ans := 0
    for _,ch := range stones {
        freq[ch]++;
    }
    for _,j := range jewels {
        count, exist := freq[j]
        if exist {
            ans += count;
        }
    }
    return ans
}