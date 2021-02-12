// https://helloacm.com/dynamic-programming-algorithm-to-count-the-exact-sum-of-subsets/ 
// https://binarysearch.com/problems/Count-Exact-Sum
// HARD, DP

int solve(vector<int>& nums, int k) {
    constexpr int M = 1e9+7;
    int n = nums.size();
    vector<int> dp(k + 1, 0);
    dp[0] = 1;
    for (auto &n: nums) {
        for (int i = k; i > 0; -- i) {
            if (i >= n) {
                dp[i] = (dp[i] + dp[i - n]) % M;
            }
        }
    }
    return dp.back();
}
