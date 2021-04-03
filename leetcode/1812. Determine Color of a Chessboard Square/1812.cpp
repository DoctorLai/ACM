// https://helloacm.com/determine-color-of-a-chessboard-square/
// https://leetcode.com/problems/determine-color-of-a-chessboard-square/
// EASY, MATH

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int col = coordinates[0] - 'a';
        int rows = coordinates[1] - '0';
        if (rows & 1) {
            return col & 1;
        } else {
            return 1 - (col & 1);
        }
    }
};
