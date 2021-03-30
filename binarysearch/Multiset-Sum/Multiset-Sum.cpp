// https://helloacm.com/count-multiset-sum-knapsacks-by-recursive-backtracking-algorithm/
// https://binarysearch.com/problems/Multiset-Sum
// MEDIUM, RECURSION

int solve(vector<int>& nums, int k) {
    //sort(begin(nums), end(nums));
    int ans = 0;
    function<void(int, int)> dfs = [&](int idx, int k) {
        if (k == 0) {
            ans ++;
        }
        if (k < 0) {
            return;
        }
        if (idx == nums.size()) {
            return;
        }
        for (int i = idx; i < nums.size(); ++ i) {
            dfs(i, k - nums[i]);
        }
    };
    dfs(0, k);
    return ans;
}
