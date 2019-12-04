// https://helloacm.com/how-to-compute-the-interval-list-intersections-using-two-pointer-algorithms/
// https://leetcode.com/problems/interval-list-intersections/
// MEDIUM, TWO POINTER

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> r;
        int n = A.size();
        int m = B.size();
        int i = 0, j = 0;
        while ((i < n) && (j < m)) {
            int start = max(A[i][0], B[j][0]);
            int end = min(A[i][1], B[j][1]);
            if (start <= end) {
                r.push_back({start, end});
            }
            if (A[i][1] < B[j][1]) {
                i ++;
            } else {
                j ++;
            }
        }
        return r;
    }
};
