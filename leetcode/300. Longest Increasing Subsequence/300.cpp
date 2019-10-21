// https://helloacm.com/how-to-find-the-length-of-the-longest-increasing-subsequence-using-dynamic-programming-algorithm/
// https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        vector<int> f(nums.size(), 1);
        int ans = 1;
        for (int i = 1; i < nums.size(); ++ i) {
            for (int j = 0; j < i; ++ j) {
                if (nums[j] < nums[i]) {
                    f[i] = max(f[i], f[j] + 1);
                    ans = max(ans, f[i]);
                }
            }
        }
        return ans;
    }
};
