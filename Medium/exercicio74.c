bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrixSize == 0 || matrixColSize[0] == 0) return false;
    int rows = matrixSize, cols = matrixColSize[0], left = 0, right = rows * cols - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2, r = mid / cols, c = mid % cols, val = matrix[r][c];
        if (val == target) return true;
        else if (val < target) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}
