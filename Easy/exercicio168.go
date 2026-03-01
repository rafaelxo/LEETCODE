func convertToTitle(columnNumber int) string {
    resp := make([]byte, 0)
    for columnNumber > 0 {
        columnNumber--
        remainder := columnNumber % 26
        resp = append(resp, byte('A' + remainder))
        columnNumber /= 26
    }
    for i, j := 0, len(resp) - 1; i < j; i, j = i + 1, j - 1 {
        resp[i], resp[j] = resp[j], resp[i]
    }
    return string(resp)
}
