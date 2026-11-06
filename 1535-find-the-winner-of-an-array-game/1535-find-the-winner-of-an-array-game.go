func getWinner(arr []int, k int) int {
    N := len(arr)
    if N <= k {
        return slices.Max(arr)
    }
    cur, cnt := arr[0], 0
    for i := 1; i < N; i++ {
        if arr[i] > cur {
            cur = arr[i]
            cnt = 1
        } else {
            cnt++
        }
        if cnt == k {
            return cur
        }
    }
    return cur
}