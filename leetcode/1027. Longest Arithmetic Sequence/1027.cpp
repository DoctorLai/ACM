// https://helloacm.com/find-out-the-longest-arithmetic-sequence-in-array-using-dynamic-programming-algorithm/
// https://leetcode.com/problems/longest-arithmetic-sequence/
// MEDIUM, DP

class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        if (A.empty()) return 0;
        int n = A.size();
        unordered_map<int, unordered_map<int, int>> dp;
        int ans = 0;
        for (int i = 0; i < n; ++ i) {
            for (int j = 0; j < i; ++ j) {
                int diff = A[i] - A[j];
                dp[i][diff] = max(dp[i][diff], dp[j][diff] + 1);
                ans = max(ans, dp[i][diff]);
            }
        }
        return ans + 1;
    }
};
