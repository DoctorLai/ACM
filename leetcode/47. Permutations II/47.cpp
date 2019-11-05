// https://helloacm.com/the-unique-permutations-algorithm-with-duplicate-elements/
// https://leetcode.com/problems/permutations-ii/
// MEDIUM, PERMUTATION, DFS, HASH SET

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> r;
        dfs(nums, 0, r, "");
        return r;
    }
    
private:
    unordered_set<string> used;
    void dfs(vector<int>& nums, int index, vector<vector<int>> &r, string key) {
        if (index == nums.size()) {
            if (!used.count(key)) {
                r.push_back(nums);
                used.insert(key);
            }            
        } else {
            for (int i = index; i < nums.size(); ++ i) {
                swap(nums[i], nums[index]);
                dfs(nums, index + 1, r, key + std::to_string(nums[index]));
                swap(nums[i], nums[index]);
            }
        }
    }
};
