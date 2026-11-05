func fallingSquares(positions [][]int) []int {
    N := len(positions)
    heights, ans := make([]int, N), make([]int, N)
    maxh := 0
    for i := 0; i < N; i++ {
        l1, s1 := positions[i][0], positions[i][1]
        r1 := l1 + s1
        baseh := 0
        for j := 0; j < i; j++ {
            l2, s2 := positions[j][0], positions[j][1]
            r2 := l2 + s2
            if l1 < r2 && r1 > l2 {
                baseh = max(baseh, heights[j])
            }
        }
        heights[i] = baseh + s1
        maxh = max(maxh, heights[i])
        ans[i] = maxh
    }
    return ans
}

func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}