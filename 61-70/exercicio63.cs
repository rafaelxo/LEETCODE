public class exercicio63 {
    public int UniquePathsWithObstacles(int[][] obstacleGrid) {
        int l = obstacleGrid.Length, c = obstacleGrid[0].Length;
        if (obstacleGrid[0][0] == 1 || obstacleGrid[l - 1][c - 1] == 1) return 0;
        int[,] resp = new int[l, c];
        resp[0, 0] = 1;
        for (int i = 1; i < l; i++) resp[i, 0] = (obstacleGrid[i][0] == 0 && resp[i - 1, 0] == 1) ? 1 : 0;
        for (int j = 1; j < c; j++) resp[0, j] = (obstacleGrid[0][j] == 0 && resp[0, j - 1] == 1) ? 1 : 0;
        for (int i = 1; i < l; i++) {
            for (int j = 1; j < c; j++) {
                if (obstacleGrid[i][j] == 0) resp[i, j] = resp[i - 1, j] + resp[i, j - 1];
                else resp[i, j] = 0;
            }
        }
        return resp[l - 1, c - 1];
    }
}
