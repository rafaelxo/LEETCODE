public class exercicio62 {
    public int UniquePaths(int m, int n) {
        int[,] resp = new int[m, n];
        for (int i = 0; i < n; i++) resp[0, i] = 1;
        for (int i = 0; i < m; i++) resp[i, 0] = 1;
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) resp[i, j] = resp[i - 1, j] + resp[i, j - 1];
        }
        return resp[m - 1, n - 1];
    }
}
