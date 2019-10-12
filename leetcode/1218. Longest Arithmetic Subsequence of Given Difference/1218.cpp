// https://helloacm.com/finding-out-the-longest-arithmetic-subsequence-of-given-difference-using-dynamic-programming-algorithm/
// https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        if (arr.empty()) return 0;
        unordered_map<int, int> dp;
        int ans = 0;
        for (const auto n: arr) {
            dp[n] = 1 + dp[n - difference];
            ans = max(ans, dp[n]);
        }
        return ans;
    }
};
