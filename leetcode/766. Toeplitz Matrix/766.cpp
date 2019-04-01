// https://helloacm.com/how-to-check-if-a-matrix-is-a-toeplitz-matrix/
// https://leetcode.com/problems/toeplitz-matrix/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>&got;& matrix) {
        for (int row = 0; row < matrix.size() - 1; row ++) {
            for (int col = 0; col < matrix[row].size() - 1; col ++) {
                if (matrix[row][col] != matrix[row + 1][col + 1]) {
                    return false;
                }
            }
        }
        return true;
    }   
};
