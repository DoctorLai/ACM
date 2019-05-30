// https://helloacm.com/algorithms-to-find-maximum-size-subarray-sum-that-equals-k/
// https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/

class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        int64_t ans = 0;
        int64_t sum = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            sum += nums[i];
        }
        if (sum == k) return nums.size();
        int64_t sum1 = sum;
        for (int i = 0; i < nums.size(); ++ i) {
            sum1 -= ((i > 0) ? nums[i - 1] : 0); // clear the left-most value
            int sum2 = sum1;
            for (int j = nums.size() - 1; j >= i; -- j) {
                sum2 -= (j == nums.size() - 1) ? 0 : nums[j + 1]; // clear the right-most value
                if (sum2 == k) {
                    int x = j - i + 1;
                    if (x > ans) ans = x;
                }
            }
        }
        return ans;
    }
};
