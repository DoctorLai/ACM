// https://helloacm.com/algorithms-to-find-the-three-numbers-in-array-that-sum-up-to-zero-3sum/
// https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<vector<int>> r;
        unordered_set<string> v;
        unordered_map<int, int> index;
        for (int i = 0; i < nums.size(); ++ i) {
            index[nums[i]] = { i };
        }
        for (int i = 0; i < nums.size(); ++ i) {
            if ((i > 0) && (nums[i] == nums[i - 1])) continue;
            for (int j = i + 1; j < nums.size(); ++ j) {
                int t = -(nums[i] + nums[j]);
                if (index.find(t) != index.end()) {
                    if (index[t] > j) {
                        string a = std::to_string(nums[i]) + "," + std::to_string(nums[j]);
                        if (!v.count(a)) {
                            r.push_back({nums[i], nums[j], t});
                            v.insert(a);
                        }
                    }
                }
            }
        }
        return r;
    }
};
