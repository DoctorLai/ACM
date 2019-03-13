// https://helloacm.com/how-to-compute-the-number-of-pawns-captures-for-rook-in-chess/
// https://leetcode.com/problems/available-captures-for-rook/

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ans = 0;
        for (int i = 0; i < 8; ++ i) {
            for (int j = 0; j < 8; ++ j) {
                if (board[i][j] == 'R') { // found the Rook
                   for (int x = i + 1; x < 8 && (board[x][j] != 'B'); ++ x) {
                       if (board[x][j] == 'p') {
                           ans ++;
                           break;
                       }
                   }
                   for (int x = i - 1; x >= 0 && (board[x][j] != 'B'); -- x) {
                       if (board[x][j] == 'p') {
                           ans ++;
                           break;
                       }
                   }
                   for (int x = j + 1; x < 8 && (board[i][x] != 'B'); ++ x) {
                       if (board[i][x] == 'p') {
                           ans ++;
                           break;
                       }
                   }
                   for (int x = j - 1; x >= 0 && (board[i][x] != 'B'); -- x) {
                       if (board[i][x] == 'p') {
                           ans ++;
                           break;
                       }
                   }
                   break; // as there is only 1 Rook.
                }
            }
        }
        return ans;
    }
};
