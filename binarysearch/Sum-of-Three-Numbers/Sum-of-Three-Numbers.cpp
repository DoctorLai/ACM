// https://helloacm.com/picking-three-distinct-numbers-sum-up-to-k/
// https://binarysearch.com/problems/Sum-of-Three-Numbers
// MEDIUM, TWO POINTER

bool solve(vector<int>& nums, int k) {
    sort(begin(nums), end(nums));
    for (int i = 0; i < nums.size(); ++ i) {
        if ((i > 0) && (nums[i] == nums[i - 1])) continue;
        int j = i + 1;
        int t = nums.size() - 1;
        while (j < t) {
            if (nums[i] + nums[j] + nums[t] == k) {
                return true;
            } else if (nums[i] + nums[j] + nums[t] > k) {
                t --;
            } else {
                j ++;
            }
        }
    }
    return false;
}
