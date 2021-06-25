# https://helloacm.com/teaching-kids-programming-number-of-changing-directions/
# https://binarysearch.com/problems/Changing-Directions
# EASY, MATH

class Solution:
    def solve(self, nums):
        if not nums or len(nums) <= 2:
            return 0
        n = len(nums)
        ans = 0
        slope = nums[1] - nums[0]
        for i in range(2, n):
            cur = nums[i] - nums[i - 1]
            if cur * slope < 0:
                ans += 1
            slope = cur
        return ans
