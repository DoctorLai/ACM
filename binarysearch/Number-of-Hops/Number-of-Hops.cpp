// https://helloacm.com/algorithms-to-compute-the-minimal-number-of-hops/
// https://binarysearch.com/problems/Number-of-Hops
// MEDIUM, GREEDY

int solve(vector<int>& nums) {
    if (nums.empty()) return 0;
    int best = 0;
    int hops = 0;
    int cur = 0;
    for (int i = 0; i + 1 < nums.size(); ++ i) {
        best = max(best, nums[i] + i);
        if (cur == i) {
            cur = best;
            hops ++;
        }
    }
    return hops;
}
