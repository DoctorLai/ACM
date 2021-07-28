// https://helloacm.com/longest-distinct-sublist-via-sliding-window-two-pointer-algorithm/
// https://binarysearch.com/problems/Longest-Distinct-Sublist
// MEDIUM, TWO POINTER, SLDING WINDOW

int solve(vector<int>& nums) {
    int n = static_cast<int>(nums.size());
    int L = 0, R = 0;
    int ans = 0;
    unordered_map<int, int> data;
    while (R < n) {
        data[nums[R]] ++;
        while (data.size() != R - L + 1) {
            data[nums[L]] --;
            if (data[nums[L]] == 0) {
                data.erase(nums[L]);
            }
            L ++;
        }
        ans = max(ans, R - L + 1);
        R ++;
    }
    return ans;
}
