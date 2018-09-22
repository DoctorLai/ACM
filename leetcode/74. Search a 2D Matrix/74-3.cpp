// https://helloacm.com/how-to-search-in-2d-sorted-matrix/
// https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (const auto &n: matrix) {
            for (const auto &m: n) {
                if (m == target) {
                    return true;
                }
            }
        }
        return false;
    }
};
