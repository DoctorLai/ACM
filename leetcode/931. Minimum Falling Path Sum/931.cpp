// https://helloacm.com/the-dynamic-programming-algorithm-to-compute-the-minimum-falling-path-sum/
// https://leetcode.com/problems/minimum-falling-path-sum/

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int row = A.size(), col = A[0].size();
        for (int i = 1; i < row; ++ i) {
            for (int j = 0; j < col; ++ j) {
                int v = A[i - 1][j];
                if (j > 0) {
                    v = min(v, A[i - 1][j - 1]);
                }
                if (j + 1 < col) {
                    v = min(v, A[i - 1][j + 1]);
                }
                A[i][j] += v;
            }
        }
        return *min_element(A[row - 1].begin(), A[row - 1].end());
    }
};
