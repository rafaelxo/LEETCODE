func numTrees(n int) int {
    res := 1
    for i := 0; i < n; i++ {
        res = res * 2 * (2*i + 1) / (i + 2)
    }
    return res
}
