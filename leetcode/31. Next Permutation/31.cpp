// https://helloacm.com/the-next-permutation-algorithm-in-c-stdnext_permutation/
// https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int sz = nums.size();
        if (sz <= 1) return;
        int i = sz - 2;
        while ((i >= 0) && (nums[i] >= nums[i + 1])) --i;
        if (i >= 0) {
            int j = sz - 1;
            while ((j >= i) && (nums[j] <= nums[i])) {
                -- j;
            }
            swap(nums[i], nums[j]);
        }
        std::reverse(begin(nums) + i + 1, end(nums));
    }
};
