// https://helloacm.com/split-a-set-into-two-with-equal-sums-and-distinct-numbers/
// https://binarysearch.com/problems/Set-Split
// MEDIUM, PREFIX, SORT

bool solve(vector<int>& nums) {
    if (nums.size() < 3) return false;
    sort(begin(nums), end(nums));
    int sum = accumulate(begin(nums), end(nums), 0);
    int running = 0;
    for (int i = 0; i + 1 < nums.size(); ++ i) {
        running += nums[i];
        if (running * 2 == sum && (nums[i] < nums[i + 1])) {
            return true;
        }
        if (running * 2 > sum) return false;
    }
    return false;
}
