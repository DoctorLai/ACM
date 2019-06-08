// https://helloacm.com/algorithms-to-count-subarray-contiguous-sum-that-equals-k/
// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; ++ i) {
            for (int j = i; j < n; ++ j) {
                int sum = 0;
                for (int k = i; k <= j; ++ k) {
                    sum += nums[k];
                }
                if (sum == k) {
                    count ++;
                }
            }
        }
        return count;        
    }
};
