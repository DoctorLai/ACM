# https://helloacm.com/teaching-kids-programming-maximum-count-of-positive-integer-and-negative-integer-in-sorted-array/
# https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
# EASY, BINARY SEARCH

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        n = bisect_left(nums, 0)
        p = len(nums) - bisect_right(nums, 0)
        return max(p, n)
