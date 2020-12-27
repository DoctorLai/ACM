# https://helloacm.com/complete-an-arithmetic-sequence-by-finding-missing-number/
# https://binarysearch.com/problems/Complete-an-Arithmetic-Sequence
# EASY, MATH

class Solution:
    def solve(self, nums):
        s = sum(nums)
        return (nums[0] + nums[-1]) * (len(nums) + 1) // 2 - s
