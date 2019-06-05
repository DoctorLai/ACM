// https://helloacm.com/algorithms-to-find-the-three-numbers-in-array-that-sum-up-to-zero-3sum/
// https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<vector<int>> r;
        for (int i = 0; i < nums.size(); ++ i) {
            if ((i > 0) && (nums[i] == nums[i - 1])) continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    r.push_back({nums[i], nums[j], nums[k]});
                    while ((j < k) && nums[j] == nums[j + 1]) j ++; // skip duplicates
                    while ((j < k) && nums[k] == nums[k - 1]) k --; // skip duplicates
                    j ++;
                    k --;
                } else if (nums[i] + nums[j] + nums[k] > 0) {
                    k --;
                } else {
                    j ++;
                }
            }
        }
        return r;
    }
};
