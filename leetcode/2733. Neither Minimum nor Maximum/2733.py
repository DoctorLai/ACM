# https://helloacm.com/teaching-kids-programming-algorithms-to-find-neither-minimum-nor-maximum/
# https://leetcode.com/problems/neither-minimum-nor-maximum/
# EASY, MATH

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) < 3:
            return -1
        nums = sorted(nums[:3])
        return nums[1]
