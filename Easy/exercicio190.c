int reverseBits(int n) {
    int resp = 0;
    for (int i = 0; i < 32; i++) {
        int last = n & 1;
        resp = resp << 1;
        resp = resp | last;
        n = n >> 1;
    }
    return resp;
}
