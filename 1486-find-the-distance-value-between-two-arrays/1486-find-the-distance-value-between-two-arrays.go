func findTheDistanceValue(arr1 []int, arr2 []int, d int) int {
    count := 0
    for _,x := range arr1 {
        valid := true
        for _,y := range arr2 {
            if abs(y-x) <= d {
                valid = false
                break
            }
        }
        if valid {
            count++
        }
    }
    return count
}

func abs(n int) int {
    if n < 0 {
        return -n
    }
    return n
}