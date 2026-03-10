int numDistinct(char *s, char *t) {
    int m = strlen(s), n = strlen(t);
    if (n > m) return 0;
    unsigned long long resp[n + 1];
    for (int i = 0; i <= n; i++) resp[i] = 0;
    resp[0] = 1;
    for (int i = 1; i <= m; i++) {
        int limit = i < n ? i : n;
        for (int j = limit; j >= 1; j--) {
            if (s[i-1] == t[j-1]) resp[j] += resp[j-1];
        }
    }
    return (int)resp[n];
}
