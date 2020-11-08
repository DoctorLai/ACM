// https://helloacm.com/in-place-algorithm-to-move-zeros-to-end-of-list/
// https://binarysearch.com/problems/In-place-Move-Zeros-to-End-of-List
// EASY, ARRAY

vector<int> solve(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); ++ i) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j ++]);
        }
    }
    while (j < nums.size()) {
        nums[j ++] = 0;
    }
    return nums;
}
