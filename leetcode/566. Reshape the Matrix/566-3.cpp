// https://helloacm.com/c-function-to-reshape-the-matrix/
// https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int x = nums.size();
        int y = nums[0].size();
        if (x * y != r * c) {
            return nums;
        }
        vector<vector<int>> result(r, vector<int>(c));
        for (int row = 0; row < x; ++ row) {
            for (int col = 0; col < y; ++ col) {                
                int cnt = row * y + col;
                result[cnt / c][cnt % c] = nums[row][col];
            }
        }
        return result;
    }
};
