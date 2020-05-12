// https://helloacm.com/prefix-sum-algorithm-to-count-number-of-nice-subarrays/
// https://leetcode.com/problems/count-number-of-nice-subarrays/
// MEDIUM, PREFIX SUM

class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        int sum = 0, ans = 0;
        Map<Integer, Integer> prefix = new HashMap<>();
        prefix.put(0, 1);
        for (int i = 0; i < nums.length; ++ i) {
            sum += nums[i] & 1;
            ans += prefix.getOrDefault(sum - k, 0);
            prefix.put(sum, prefix.getOrDefault(sum, 0) + 1);
        }
        return ans;
    }
}
