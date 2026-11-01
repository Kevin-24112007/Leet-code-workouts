func minMoves(nums []int) int {
    minVal, m := slices.Min(nums), 0
    for _, n := range nums{
        m += n - minVal
    }
    return m
}