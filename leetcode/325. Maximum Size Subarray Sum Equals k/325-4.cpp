// https://helloacm.com/algorithms-to-find-maximum-size-subarray-sum-that-equals-k/
// https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/

class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        int n = nums.size(), r = 0;
        for (int i = 0; i < n; ++ i) {
            for (int j = i; j < n; ++ j) {
                int sum = 0;
                for (int a = i; a <= j; ++ a) { // subarray sum
                    sum += nums[a];
                }
                if (sum == k) { // find a match, record the max size
                    r = max(r, j - i + 1);
                }
            }
        }
        return r;
    }
};
