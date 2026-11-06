func countServers(n int, logs [][]int, x int, queries []int) []int {
    sort.Slice(logs, func(l, r int) bool {
        return logs[l][1] < logs[r][1]
    })
    Q, L := len(queries), len(logs)
    q := make([][2]int, Q)
    for i, t := range queries {
        q[i] = [2]int {t, i}
    }
    sort.Slice(q, func(l, r int) bool {
        return q[l][0] < q[r][0]
    })
    count, ans := make([]int, n+1), make([]int, Q)
    l, r, cur := 0, 0, 0
    for _, p := range q {
        t, i := p[0], p[1]
        for r < L && logs[r][1] <= t {
            id := logs[r][0]
            count[id]++
            if count[id] == 1 {
                cur++
            }
            r++
        }
        for l < r && logs[l][1] < t-x {
            id := logs[l][0]
            count[id]--
            if count[id] == 0 {
                cur--
            }
            l++
        }
        ans[i] = n - cur
    }
    return ans
}