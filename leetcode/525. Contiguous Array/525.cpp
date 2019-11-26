// https://helloacm.com/the-contiguous-binary-array-with-equal-numbers-of-ones-and-zeros/
// https://leetcode.com/problems/contiguous-array/
// MEDIUM, PREFIX SUM, HASH MAP, ARRAY

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return 0;
        unordered_map<int, int> prefix;
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            sum += nums[i] == 0 ? 1 : -1;
            if (sum == 0) {
                ans = i + 1;
            }
            if (prefix.find(sum) != prefix.end()) {
                ans = max(ans, i - prefix[sum]);
            } else {
                prefix[sum] = i;
            }
        }
        return ans;
    }
};
