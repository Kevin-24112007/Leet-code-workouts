func missingInteger(nums []int) int {
    sum := nums[0]
    N := len(nums);
    for i := 1; i < N; i++ {
        if nums[i] == nums[i-1] + 1 {
            sum += nums[i]
        } else {
            break;
        }
    }
    seen := make(map[int] bool)
    for _, n := range nums {
        seen[n] = true
    }
    for seen[sum] {
        sum++;
    }
    return sum;
}