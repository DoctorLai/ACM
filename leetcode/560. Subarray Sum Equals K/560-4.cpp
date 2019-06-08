// https://helloacm.com/algorithms-to-count-subarray-contiguous-sum-that-equals-k/
// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int r = 0, sum = 0;
        unordered_map<int, int> count;
        count[0] = 1;
        for (int i = 0; i < n; ++ i) {
            sum += nums[i];
            if (count.find(sum - k) != count.end()) {
                r += count[sum - k];
            }
            if (count.find(sum) == count.end()) {
                count[sum] = 1;
            } else {
                count[sum] ++;
            }
        }
        return r;
    }
};
