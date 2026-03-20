int hammingWeight(int n) {
    int resp = 0;
    while (n != 0) {
        n = n & (n - 1);
        resp++;
    }
    return resp;
}
