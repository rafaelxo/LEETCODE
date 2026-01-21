class Solution {
public:
    int count = 0;

    void backtrack(int row, int n, int cols, int diag1, int diag2) {
        if (row == n) {
            count++;
            return;
        }
        int avaib = ((1 << n) - 1) & ~(cols | diag1 | diag2);
        while (avaib) {
            int bit = avaib & -avaib;
            avaib -= bit;
            backtrack( row + 1, n, cols | bit, (diag1 | bit) << 1, (diag2 | bit) >> 1);
        }
    }

    int totalNQueens(int n) {
        backtrack(0, n, 0, 0, 0);
        return count;
    }
};
