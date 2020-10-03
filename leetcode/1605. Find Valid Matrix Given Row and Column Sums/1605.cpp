// https://helloacm.com/greedy-algorithm-to-find-valid-matrix-given-row-and-column-sums/
// https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/
// MEDIUM, GREEDY

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int r = rowSum.size();
        int c = colSum.size();
        vector<vector<int>> ans(r, vector<int>(c, 0));
        for (int i = 0; i < r; ++ i) {
            for (int j = 0; j < c; ++ j) {
                int m = min(rowSum[i], colSum[j]);
                ans[i][j] += m;
                rowSum[i] -= m;
                colSum[j] -= m;
            }
        }
        return ans;
    }
};