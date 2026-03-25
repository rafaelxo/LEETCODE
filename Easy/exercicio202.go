func isHappy(n int) bool {
    slow := n
    fast := sumOfSquares(n)

    for fast != 1 && slow != fast {
        slow = sumOfSquares(slow)
        fast = sumOfSquares(sumOfSquares(fast))
    }

    return fast == 1
}

func sumOfSquares(n int) int {
    sum := 0
    for n > 0 {
        digit := n % 10
        sum += digit * digit
        n /= 10
    }
    return sum
}
