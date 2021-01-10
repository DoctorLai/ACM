// https://helloacm.com/recursive-and-two-pointer-algorithms-to-determine-four-sum/
// https://binarysearch.com/problems/Sum-of-Four-Numbers
// MEDIUM, RECURSION

bool solve(vector<int>& nums, int k) {
    function<bool(int, int, int)> dfs = [&](int left, int count, int sum) {
        if (count == 4) {
            return sum == 0;
        }
        if (left >= nums.size()) return false;
        return dfs(left + 1, count, sum) || 
               dfs(left + 1, count + 1, sum - nums[left]);
    };
    return dfs(0, 0, k);
}
