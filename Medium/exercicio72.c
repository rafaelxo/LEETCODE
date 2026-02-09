int min(int a, int b) { return a < b ? a : b; }

int minDistance(char* word1, char* word2) {
    int n = strlen(word1), m = strlen(word2);
    int resp[n + 1][m + 1];
    for (int i = 0; i <= n; i++) resp[i][0] = i;
    for (int j = 0; j <= m; j++) resp[0][j] = j;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (word1[i - 1] == word2[j - 1]) resp[i][j] = resp[i - 1][j - 1];
            else resp[i][j] = 1 + min(resp[i - 1][j], min(resp[i][j - 1], resp[i - 1][j - 1]));
        }
    }
    return resp[n][m];
}
