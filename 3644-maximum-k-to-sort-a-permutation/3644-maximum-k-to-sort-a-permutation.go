func sortPermutation(nums []int) int {
    n := len(nums)
    ans := -1
    for i := 0; i < n; i++ {
        if nums[i] != i {
            ans &= nums[i]
        }
    }
    if ans == -1 {
        return 0
    }
    return ans
}