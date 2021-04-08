// https://helloacm.com/algorithm-of-summarizing-contiguous-intervals/
// https://binarysearch.com/problems/Contiguous-Intervals
// MEDIUM, MATH, SORT

vector<vector<int>> solve(vector<int>& nums) {
    sort(begin(nums), end(nums));    
    vector<vector<int>> ans;
    for (auto &n: nums) {
        if ((!ans.empty()) && (ans.back().back() + 1 == n)) {
            ans.back().back() += 1;
        } else {
            ans.push_back({n, n});
        }
    }
    return ans;
}
