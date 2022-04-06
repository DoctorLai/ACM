# https://leetcode.com/problems/check-if-an-array-is-consecutive/
# https://helloacm.com/teaching-kids-programming-check-if-an-array-is-consecutive-via-sorting-algorithm/
# EASY, SORTING

class Solution:
    def isConsecutive(self, nums: List[int]) -> bool:
        nums.sort()
        return all(nums[i] == nums[i - 1] + 1 for i in range(1, len(nums)))
