// https://helloacm.com/greedy-solution-to-reconstruct-a-2-row-binary-matrix/
// https://leetcode.com/problems/reconstruct-a-2-row-binary-matrix/
// MEDIUM, GREEDY

class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        vector<vector<int>> r(2, vector<int>(colsum.size(), -1));
        for (int i = 0; i < colsum.size(); ++ i) {
            if (colsum[i] == 2) {
                if (--upper < 0) return {};
                if (--lower < 0) return {};
                r[0][i] = 1;
                r[1][i] = 1;
            } else if (colsum[i] == 0) {
                r[0][i] = 0;
                r[1][i] = 0;
            } else {
                if (upper > lower) {
                    r[0][i] = 1;
                    r[1][i] = 0;
                    if (-- upper < 0) return {};
                } else {
                    r[0][i] = 0;
                    r[1][i] = 1;
                    if (-- lower < 0) return {};
                }
            }
        }
        return ((upper == 0) && (lower == 0)) ? r : vector<vector<int>>(0);
    }
};
