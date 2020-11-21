// https://helloacm.com/large-to-small-sorting-algorithm-using-two-pointer/
// https://binarysearch.com/problems/Large-to-Small-Sort
// EASY, SORT, ARRAY, TWO POINTER

vector<int> solve(vector<int>& nums) {
    sort(begin(nums), end(nums));
    int i = 0, j = nums.size() - 1;
    vector<int> ans;
    while (i < j) {
        ans.push_back(nums[j --]);
        ans.push_back(nums[i ++]);
    }
    if (nums.size() & 1) {
        ans.push_back(nums[i]);
    }
    return ans;
}
