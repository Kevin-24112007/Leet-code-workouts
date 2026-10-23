func sumZero(n int) []int {
    arr := make([]int, 0, n)
    if n&1 == 1 {
        arr = append(arr, 0)
    }
    for i := 1; i <= n/2; i++ {
        arr = append(arr, i, -i)
    }
    return arr
}