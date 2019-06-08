// https://helloacm.com/algorithms-to-count-subarray-contiguous-sum-that-equals-k/
// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int r = 0;
        for (int i = 0; i < n; ++ i) {
            int sum = 0;
            for (int j = i; j < n; ++ j) {
                sum += nums[j];
                if (sum == k) r ++;
            }
        }
        return r;
    }
};
