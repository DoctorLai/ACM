// https://helloacm.com/how-to-search-in-2d-sorted-matrix/
// https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        auto rows = matrix.size();
        if (rows == 0) return false;
        auto cols = matrix[0].size();
        if (cols == 0) return false;
        int i = rows - 1;
        int j = 0;
        while (i >= 0 && j < cols) {
            if (matrix[i][j] == target) return true;
            if (target > matrix[i][j]) {
                j ++;
            } else {
                i --;
            }
        }
        return false;
    }
};
