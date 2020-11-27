// https://helloacm.com/algorithm-to-swap-consecutive-pair-of-even-numbers/
// https://binarysearch.com/problems/Swap-Consecutive-Pair-of-Even-Numbers
// EASY, SWAP, ARRAY

vector<int> solve(vector<int>& nums) {
    int i = 0;
    for (; i + 4 < nums.size(); i += 4) {
        swap(nums[i], nums[i + 2]);
        swap(nums[i + 1], nums[i + 3]);
    }
    if (i + 2 < nums.size()) {
        swap(nums[i], nums[i + 2]);
    }
    return nums;
}
