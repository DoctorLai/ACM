// https://helloacm.com/4sum-find-unique-quadruplets-that-sum-to-target-using-on3-four-pointers-algorithm/
// https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> r;
        if (nums.empty()) return r;        
        sort(begin(nums), end(nums));
        int n = nums.size();
        for (int i = 0; i < n; ++ i) {
            if ((i > 0) && (nums[i] == nums[i - 1])) continue;
            for (int j = i + 1; j < n; ++ j) {
                if ((j > i + 1) && (nums[j] == nums[j - 1])) continue;
                int k = j + 1;
                int u = n - 1;
                while (k < u) {
                    int s = nums[i] + nums[j] + nums[k] + nums[u];
                    if (s == target) {
                        r.push_back({nums[i], nums[j], nums[k], nums[u]});
                        k ++;
                        u --;
                        while (nums[k] == nums[k - 1] && (k < u)) k ++;
                        while (nums[u] == nums[u + 1] && (k < u)) u --;
                    } else if (s > target) {
                        u --;
                    } else {
                        k ++;
                    }
                }
            }
        }
        return r;
    }
};
