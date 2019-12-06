// https://helloacm.com/algorithm-to-find-the-winner-on-a-tic-tac-toe-game/
// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/
// EASY, BRUTEFORCE, GAME

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        char board[3][3] = {};
        //std::fill(&board[0][0], &board[0][0] + sizeof(board), ' ');
        string result;
        int i = 0;
        for (const auto &n: moves) {
            board[n[0]][n[1]] = ((i ++) % 2 == 0) ? 'A' : 'B';
            if (win(board, result)) {
                return result;
            }
        }
        return i == 9 ? "Draw" : "Pending";
    }
private:
    bool win(char board[3][3], string &result) {
        for (int i = 0; i < 3; ++ i) {
            if ((board[i][0] != 0) && (board[i][0] == board[i][1]) && (board[i][1] == board[i][2])) {
                result = board[i][0];
                return true;
            }
            if ((board[0][i] != 0) && (board[0][i] == board[1][i]) && (board[1][i] == board[2][i])) {
                result = board[0][i];
                return true;
            }            
        }
        if ((board[1][1] != 0) && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
            result = board[1][1];
            return true;
        }
        if ((board[1][1] != 0) && (board[0][2] == board[1][1]) && (board[1][1] == board[2][0])) {
            result = board[1][1];
            return true;
        }        
        return false;
    }
};
