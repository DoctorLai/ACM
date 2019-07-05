// https://helloacm.com/how-to-design-a-tic-tac-toe-game/
// https://leetcode.com/problems/design-tic-tac-toe/

class TicTacToe {
public:
    /** Initialize your data structure here. */
    TicTacToe(int n) {
        board.resize(n);
        rowc[0].resize(n);
        rowc[1].resize(n);
        colc[0].resize(n);
        colc[1].resize(n);
        d[0][0] = 0;
        d[0][1] = 0;
        d[1][0] = 0;
        d[1][1] = 0;
        for (int i = 0; i < n; ++ i) {
            board[i].resize(n);
            rowc[0][i] = 0;
            rowc[1][i] = 0;
            colc[0][i] = 0;
            colc[1][i] = 0;            
        }
    }
    
    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    int move(int row, int col, int player) {
        board[row][col] = player;
        int n = board.size();
        if (++rowc[player - 1][row] == n) return player;
        if (++colc[player - 1][col] == n) return player;
        if (row == col) {
            if (++d[player - 1][0] == n) return player;
        }
        if (n - row - 1 == col) {
            if (++d[player - 1][1] == n) return player;
        }
        return 0;
    }
private:
    vector<vector<int>> board;
    int d[2][2];
    vector<int> rowc[2];
    vector<int> colc[2];
};
