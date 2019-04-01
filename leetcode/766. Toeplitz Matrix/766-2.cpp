// https://helloacm.com/how-to-check-if-a-matrix-is-a-toeplitz-matrix/
// https://leetcode.com/problems/toeplitz-matrix/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        unordered_map<int, int> group;
        for (int row = 0; row < matrix.size(); row ++) {
            for (int col = 0; col < matrix[row].size(); col ++) {
                if (group.find(row - col) == group.end()) {
                    group[row - col] = matrix[row][col];
                } else {
                    if (group[row - col] != matrix[row][col]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }   
};
