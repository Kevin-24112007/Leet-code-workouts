func fizzBuzz(n int) []string {
    ans := []string{}
    for i := 1; i <= n; i++ {
        var s string
        if i%3 == 0 && i%5 == 0 {
            s = "FizzBuzz"
        } else if i%3 == 0 {
            s = "Fizz"
        } else if i%5 == 0 {
            s = "Buzz"
        } else {
            s = strconv.Itoa(i)
        }
        ans = append(ans, s);
    }
    return ans
}