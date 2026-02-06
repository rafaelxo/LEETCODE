void setZeroes(int** matrix, int matrixSize, int* matrixcize) {
    int r = matrixSize;
    int c = matrixcize[0];
    int fRz = 0;
    int fCz = 0;
    for (int j = 0; j < c; j++) {
        if (matrix[0][j] == 0) {
            fRz = 1;
            break;
        }
    }
    for (int i = 0; i < r; i++) {
        if (matrix[i][0] == 0) {
            fCz = 1;
            break;
        }
    }
    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
        }
    }
    if (fRz) {
        for (int j = 0; j < c; j++) matrix[0][j] = 0;
    }
    if (fCz) {
        for (int i = 0; i < r; i++) matrix[i][0] = 0;
    }
}
