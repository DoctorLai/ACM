// https://helloacm.com/counting-algorithms-to-compute-all-sublists-sum/
// https://binarysearch.com/problems/All-Sublists-Sum
// MEDIUM, MATH

int solve(vector<int>& nums) {
    int64_t ans = 0;
    int M = 1e9+7;
    int n = static_cast<int>(nums.size());
    for (int i = 0; i < n; ++ i) {
        ans = (ans + (int64_t)nums[i] * (i + 1) * (n - i)) % M;
    }
    return ans;
}
