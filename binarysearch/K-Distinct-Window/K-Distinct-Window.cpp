// https://helloacm.com/k-distinct-window-algorithm-by-sliding-window/
// https://binarysearch.com/problems/K-Distinct-Window
// MEDIUM, SLIDING WINDOW

vector<int> solve(vector<int>& nums, int k) {
    int n = nums.size();
    if (0 == n) return {};
    vector<int> res;
    unordered_map<int, int> w;
    for (int i = 0; i < n; ++ i) {
        w[nums[i]] ++;
        if (i >= k) {
            if (--w[nums[i - k]] == 0) {
                w.erase(nums[i - k]);
            }
        }
        if (i >= k - 1) {
            res.push_back(w.size());
        }
    }
    return res;
}
