func countServers(grid [][]int) int {
    R, C := len(grid), len(grid[0])
    total := 0
    row, col := make([]int, R), make([]int, C)
    for r := 0; r < R; r++ {
        for c := 0; c < C; c++ {
            if grid[r][c] == 1 {
                row[r]++
                col[c]++
            }
        }
    }
    for r := 0; r < R; r++ {
        for c := 0; c < C; c++ {
            if grid[r][c] == 1 && (row[r] > 1 || col[c] > 1) {
                total++
            }
        }
    }
    return total
}