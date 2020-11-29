// https://helloacm.com/introducing-the-mixed-sorting-algorithm/
// https://binarysearch.com/problems/Mixed-Sorting
// EASY, SORT

vector<int> solve(vector<int>& nums) {
    vector<int> oddIdx, evenIdx;
    for (int i = 0; i < nums.size(); ++ i) {
        if (nums[i] & 1) {
            oddIdx.push_back(i);
        } else {
            evenIdx.push_back(i);
        }
    }
    sort(begin(nums), end(nums));
    int odd = oddIdx.size() - 1, even = 0;
    vector<int> ans(nums.size());
    for (int i = 0; i < nums.size(); ++ i) {
        if (nums[i] & 1) {
            ans[oddIdx[odd --]] = nums[i];
        } else {
            ans[evenIdx[even ++]] = nums[i];
        }
    }
    return ans;
}
