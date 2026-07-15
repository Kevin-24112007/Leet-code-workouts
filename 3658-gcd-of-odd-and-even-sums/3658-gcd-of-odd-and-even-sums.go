func gcd(a int, b int) int {
    if b == 0 {
        return a
    }
    return gcd(b, a%b)
}

func gcdOfOddEvenSums(n int) int {
    oddSum := n*n
    evenSum := n*(n+1)
    if oddSum > evenSum {
        return gcd(oddSum,evenSum)
    }
    return gcd(evenSum,oddSum)
}