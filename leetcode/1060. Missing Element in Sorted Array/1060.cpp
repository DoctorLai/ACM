// https://helloacm.com/algorithms-to-find-the-missing-element-in-sorted-array/
// https://leetcode.com/problems/missing-element-in-sorted-array/

class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = n;
        while (i < j) {
            int m = i + (j - i) / 2;
            nums[m] - m - k >= nums[0] ? j = m : i = m + 1;
        }
        return nums[0] + i + k - 1;
    }
};
