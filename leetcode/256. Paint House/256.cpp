// https://helloacm.com/how-to-paint-the-houses-using-minimal-costs-via-dynamic-programming-algorithm/
// https://leetcode.com/problems/paint-house/

class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        int n = costs.size();
        if (n == 0) return 0;
        vector<vector<int>> f(n, vector<int>(3, INT_MAX));
        f[0][0] = costs[0][0];
        f[0][1] = costs[0][1];
        f[0][2] = costs[0][2];
        for (int i = 1; i < n; ++ i) {
            f[i][0] = min(f[i - 1][1], f[i - 1][2]) + costs[i][0];
            f[i][1] = min(f[i - 1][2], f[i - 1][0]) + costs[i][1];
            f[i][2] = min(f[i - 1][0], f[i - 1][1]) + costs[i][2];
        }
        return min(f[n - 1][0], min(f[n - 1][1], f[n - 1][2]));
    }
};
