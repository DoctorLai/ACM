// https://helloacm.com/finding-the-lucky-numbers-in-a-matrix/
// https://leetcode.com/problems/lucky-numbers-in-a-matrix/
// EASY, MATRIX

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;        
        int R = matrix.size();
        if (R == 0) return {};
        int C = matrix[0].size();
        vector<int> rowMin(R, INT_MAX);
        vector<int> colMax(C, -INT_MAX-1);
        for (int r = 0; r < R; ++ r) {
            for (int c = 0; c < C; ++ c) {
                rowMin[r] = min(rowMin[r], matrix[r][c]);
                colMax[c] = max(colMax[c], matrix[r][c]);
            }
        }
        for (int r = 0; r < R; ++ r) {
            for (int c = 0; c < C; ++ c) {
                if (rowMin[r] == colMax[c]) {
                    res.push_back(matrix[r][c]);
                }
            }
        }
        return res;
    }
};
