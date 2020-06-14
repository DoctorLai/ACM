// https://helloacm.com/how-to-compute-running-sum-of-1d-array-using-stdpartial_sum-in-c/
// https://leetcode.com/problems/running-sum-of-1d-array/
// EASY, PREFIX SUM

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        partial_sum(begin(nums), end(nums), begin(nums));
        return nums;
    }
};
