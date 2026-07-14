func maximumGap(nums []int) int {
    if len(nums) < 2 {
        return 0
    }
    slices.Sort(nums)
    var max_diff = nums[1] - nums[0]
    for i := 2; i < len(nums); i++ {
        max_diff = max(max_diff,nums[i]-nums[i-1])
    }
    return max_diff
}