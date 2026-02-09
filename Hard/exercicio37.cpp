class Solution {
public:
    int row[9] = {}, col[9] = {}, box[9] = {};

    bool dfs(vector<vector<char>>& board) {
        int r = -1, c = -1, minChoices = 10;
        int mask = 0;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    int b = (i / 3) * 3 + (j / 3);
                    int used = row[i] | col[j] | box[b];
                    int choices = 9 - __builtin_popcount(used);
                    if (choices < minChoices) {
                        minChoices = choices;
                        r = i; c = j;
                        mask = used;
                        if (choices == 1) break;
                    }
                }
            }
        }
        if (r == -1) return true;
        int b = (r / 3) * 3 + (c / 3);
        for (int d = 1; d <= 9; d++) {
            int bit = 1 << (d - 1);
            if (!(mask & bit)) {
                board[r][c] = d + '0';
                row[r] |= bit;
                col[c] |= bit;
                box[b] |= bit;
                if (dfs(board)) return true;
                board[r][c] = '.';
                row[r] ^= bit;
                col[c] ^= bit;
                box[b] ^= bit;
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int bit = 1 << (board[i][j] - '1');
                    row[i] |= bit;
                    col[j] |= bit;
                    box[(i / 3) * 3 + (j / 3)] |= bit;
                }
            }
        }
        dfs(board);
    }
};
