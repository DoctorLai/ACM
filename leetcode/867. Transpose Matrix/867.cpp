// https://helloacm.com/how-to-transpose-a-2d-matrix/
// https://leetcode.com/problems/transpose-matrix/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int rows = A.size();
        if (rows == 0) return {{}};
        int cols = A[0].size();
        vector<vector<int>> r(cols, vector<int>(rows));        
        for (int i = 0; i < rows; ++ i) {
            for (int j = 0; j < cols; ++ j) {
                r[j][i] = A[i][j];
            }
        }        
        return r;
    }
};
