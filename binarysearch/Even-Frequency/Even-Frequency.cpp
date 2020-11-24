// https://helloacm.com/even-frequency-of-array-using-sort-or-hash-map/
// https://binarysearch.com/problems/Even-Frequency
// EASY, SORT

bool solve(vector<int>& nums) {
    sort(begin(nums), end(nums));
    for (int i = 0; i + 1 < nums.size(); i += 2) {
        if (nums[i] != nums[i + 1]) return false;
    }
    return (nums.size() & 1) == 0;
}
