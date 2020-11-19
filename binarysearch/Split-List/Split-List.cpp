// https://helloacm.com/split-the-list-into-two-parts/
// https://binarysearch.com/problems/Split-List
// EASY, PREFIX, SUFFIX

bool solve(vector<int>& nums) {
    if (nums.empty()) return true;
    int sz = static_cast<int>(nums.size());
    vector<int> leftMax(sz), rightMin(sz);
    leftMax[0] = nums[0];
    rightMin.back() = nums.back();
    for (int i = 1; i < sz; ++ i) {
        leftMax[i] = max(leftMax[i - 1], nums[i]);
    }
    for (int i = sz - 2; i >= 0; -- i) {
        rightMin[i] = min(rightMin[i + 1], nums[i]);
    }
    for (int i = 0; i < sz - 1; ++ i) {
        if (leftMax[i] < rightMin[i + 1]) {
            return true;
        }
    }
    return false;
}
