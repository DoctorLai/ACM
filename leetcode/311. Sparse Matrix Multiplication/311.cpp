// https://helloacm.com/how-to-multiply-two-matrices-in-c/
// https://leetcode.com/problems/sparse-matrix-multiplication/

class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> r;        
        int rowA = A.size();
        if (rowA == 0) return r;
        int colA = A[0].size();
        if (colA == 0) return r;
        int rowB = B.size();
        if (rowB == 0) return r;
        int colB = B[0].size();
        if (colB == 0) return r;
        r.resize(rowA);
        for (int i = 0; i < rowA; ++ i) {
            r[i].resize(colB);
        }
        for (int i = 0; i < rowA; ++ i) {
            for (int j = 0; j < colB; ++ j) {
                for (int k = 0; k < colA; ++ k) {
                    r[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        return r;
    }
};
