func minimumOperations(nums []int) int {
    count := 0
    for _, n := range nums{
        if n%3 != 0{
            count++
        }
    }
    return count
}