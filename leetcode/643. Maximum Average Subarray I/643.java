// https://helloacm.com/how-to-compute-the-maximum-average-subarray/
// https://leetcode.com/problems/maximum-average-subarray-i/

class Solution {
    public double findMaxAverage(int[] nums, int k) {
        if (nums.length == 0) return 0;
        if (nums.length == 1) return nums[0];
        double sum = 0;
        k = Math.min(k, nums.length);
        for (int i = 0; i < k; ++ i) {
            sum += nums[i];
        }
        double v = sum;
        for (int i = 1; i + k <= nums.length; ++ i) {
            sum = sum - nums[i - 1] + nums[i + k - 1];
            v = Math.max(v, sum);
        }
        return v / k;
    }
};
