# https://helloacm.com/teaching-kids-programming-maximum-ascending-subarray-sum-greedy-algorithm/
# https://leetcode.com/problems/maximum-ascending-subarray-sum/
# EASY, GREEDY

class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        n = len(nums)
        if not n:
            return 0
        ans = cur = nums[0]        
        for i in range(1, n):
            if nums[i] > nums[i - 1]:
                cur += nums[i]
            else:
                cur = nums[i]
            ans = max(cur, ans)
        return ans
