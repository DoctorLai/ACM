// https://helloacm.com/the-image-smoother-algorithm-in-c-java/
// https://leetcode.com/problems/image-smoother/

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int row = M.size();
        if (row == 0) return M;
        int width = M[0].size();
        if (width == 0) return M;
        vector<vector<int>> N(row, vector<int>(width)); // or N = M deep copy of vector
        for (int i = 0; i < row; ++ i) {
            for (int j = 0; j < width; ++ j) {
                int sum = 0, c = 0;
                for (int k = max(0, i - 1); k <= min(i + 1, row - 1); k ++) {
                    for (int u = max(0, j - 1); u <= min(j + 1, width - 1); u ++) {
                        sum += M[k][u];
                        c ++;
                    }
                }
                N[i][j] = sum / c;
            }
        }
        return N;
    }
};
