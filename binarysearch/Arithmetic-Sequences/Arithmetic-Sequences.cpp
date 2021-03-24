// https://helloacm.com/dynamic-programming-algorithm-to-count-contiguous-arithmetic-sequences/
// https://binarysearch.com/problems/Arithmetic-Sequences
// MEDIUM, DP

int solve(vector<int>& nums) {
    int n = static_cast<int>(nums.size());
    if (n == 0) return 0;
    vector<int> dp(n, 0);
    int ans = 0;
    for (int i = 2; i < n; ++ i) {
        if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
            dp[i] = dp[i - 1] + 1;
            ans += dp[i];
        }
    }
    return ans;
}
