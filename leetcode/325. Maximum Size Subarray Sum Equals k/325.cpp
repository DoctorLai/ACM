// https://helloacm.com/algorithms-to-find-maximum-size-subarray-sum-that-equals-k/
// https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/

class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        int n = nums.size(), r = 0;
        unordered_map<int, int> prefix;
        int total = 0;
        prefix[0] = -1; // as index starts from zero
        for (int i = 0; i < nums.size(); ++ i) {
            total += nums[i];
            if (prefix.find(total) == prefix.end()) {
                prefix[total] = i;
            }
            if (prefix.find(total - k) != prefix.end()) {
                r = max(r, i - prefix[total - k]);
            } 
        }
        return r;
    }
};
