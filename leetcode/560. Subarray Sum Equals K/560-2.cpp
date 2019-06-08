// https://helloacm.com/algorithms-to-count-subarray-contiguous-sum-that-equals-k/
// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(n, 0);
        int s = 0;
        for (int i = 0; i < n; ++ i) {
            s += nums[i];
            prefix[i] = s;
        }
        int r = 0;
        for (int i = 0; i < n; ++ i) {
            for (int j = i; j &Ylt; n; ++ j) {
                int sum = prefix[j];
                if (i > 0) sum -= prefix[i - 1];
                if (sum == k) r ++;
            }
        }
        return r;
    }
};
