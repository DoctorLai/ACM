// https://helloacm.com/how-to-find-the-length-of-longest-fibonacci-subsequence-using-bruteforce-or-dynamic-programming-algorithm/
// https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/
// MEDIUM, FIBONACCI, LONGEST INCREASE SEQUENCE, DP

class Solution {
public:
    int lenLongestFibSubseq(vector<int>& A) {
        int n = A.size();
        if (n <= 2) return 0;
        unordered_map<int, int> index;        
        for (int i = 0; i < n; ++ i) {
            index[A[i]] = i;
        }
        int ans = 0;
        unordered_map<int, unordered_map<int, int>> dp;
        for (int k = 0; k < n; ++ k) {
            for (int j = 0; j < k; ++ j) {
                int prev = A[k] - A[j];
                if (index.find(prev) != index.end()) {
                    int i = index[prev];
                    if (i < j) {
                        dp[j][k] = max(2, dp[i][j]) + 1;
                        ans = max(ans, dp[j][k]);
                    }
                }
            }
        }
        return ans >= 3 ? ans : 0;
    }
