# https://helloacm.com/teaching-kids-programming-prefix-sum-algorithm-to-find-the-middle-index-in-array/
# https://leetcode.com/problems/find-the-middle-index-in-array/
# EASY, PREFIX SUM

class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        s = sum(nums)
        c = 0
        for i, x in enumerate(nums):
            if s - x - c == c:
                return i
            c += x            
        return -1
