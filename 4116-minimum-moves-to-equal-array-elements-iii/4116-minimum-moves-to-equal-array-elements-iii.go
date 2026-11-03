func minMoves(nums []int) int {
    val := slices.Max(nums)
    count := 0
    for _, n := range nums{
        count += (val - n)
    }
    return count
}