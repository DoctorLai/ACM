// https://helloacm.com/using-backtracking-algorithm-to-find-the-combination-integer-sum/
// https://leetcode.com/problems/combination-sum/

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> r;
        if (candidates.size() == 0) {
            return r;
        }
        // largest to smallest order
        sort(begin(candidates), end(candidates), [](auto a, auto b) { return a > b; });        
        vector<int> cur = {};
        dfs(r, target, candidates, 0, cur);
        return r;
    }
private:
    void dfs(vector<vector<int>> &r, int target, vector<int>& candidates, int index, vector<int> &cur) {
        // find a combination, add it to the result solution
        if (target == 0) {
            r.push_back(cur);
        }
        for (int i = index; i < candidates.size(); ++ i) {
            // we can use this candidate                
            if (target >= candidates[i]) {
                cur.push_back(candidates[i]);                
                // backtracking with updated sum, and candidate no bigger than this one            
                dfs(r, target - candidates[i], candidates, i, cur);
                cur.pop_back();
            }
        }
    }
};
