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
        queue<int> data;
        for (const auto &n: nums) {
            for (const auto &m: n) {
                data.push(m);
            }
        }
        vector<vector<int>> result(r, vector<int>(c));
        for (int row = 0; row < r; ++ row) {
            for (int col = 0; col < c; ++ col) {                
                result[row][col] = data.front();
                data.pop();
            }
        }        
        return result;
    }
};
