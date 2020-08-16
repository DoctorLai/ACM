// https://helloacm.com/depth-first-search-backtracking-algorithm-to-solve-a-sudoku-game/
// https://leetcode.com/problems/sudoku-solver/
// HARD, DFS, BACKTRACKING

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        for (int r = 0; r < 9; ++ r) {
            for (int c = 0; c < 9; ++ c) {
                if (board[r][c] != '.') {
                    int x = board[r][c] - '0';
                    cols[c].insert(x);
                    rows[r].insert(x);
                    box[r/3][c/3].insert(x);
                }
            }
        }
        dfs(board, 0, 0);
    }
    
private:
    unordered_set<int> cols[9];
    unordered_set<int> rows[9];
    unordered_set<int> box[3][3];
    
    bool dfs(vector<vector<char>>& board, int r, int c) {
        if (c == 9) {
            r ++;
            c = 0;
        }
        if (r == 9) {
            return true;
        }       
        if (board[r][c] != '.') {
            return dfs(board, r, c + 1);
        }
        for (int i = 1; i <= 9; ++ i) {
            if (check(i, r, c)) {
                board[r][c] = (char)(48 + i);
                cols[c].insert(i);
                rows[r].insert(i);
                box[r/3][c/3].insert(i);
                if (dfs(board, r, c + 1)) {                  
                    return true;
                }
                board[r][c] = '.';
                cols[c].erase(i);
                rows[r].erase(i);       
                box[r/3][c/3].erase(i);
            }
        }
        return false;
    }
    
    bool check(int x, int r, int c) {
        return (cols[c].count(x) == 0) && (rows[r].count(x) == 0) 
            && (box[r/3][c/3].count(x) == 0);
    }
};
