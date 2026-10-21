func minOperations(s1 string) int {
    s := []byte(s1)
    if slices.IsSorted(s) {
        return 0
    }
    n := len(s)
    if n == 2 {
        return -1
    }
    mn, mx := slices.Min(s), slices.Max(s)
    if s[0] == mn || s[n-1] == mx {
        return 1
    }
    for i := 1; i < n-1; i++ {
		if s[i] == mn || s[i] == mx {
			return 2
		}
	}
	return 3
}