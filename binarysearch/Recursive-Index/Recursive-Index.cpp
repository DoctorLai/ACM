// https://helloacm.com/array-recursive-index-algorithm-by-simulation/
// https://binarysearch.com/problems/Recursive-Index
// EASY, SIMULATION

int solve(vector<int>& nums, int k) {
    int ans = 0;
    int cnt = 0;
    while (true) {
        if (k < 0 || k >= nums.size()) {
            break;
        }
        if (++ cnt > nums.size()) return -1;
        ans ++;
        k = nums[k];
    }
    return ans;
}
