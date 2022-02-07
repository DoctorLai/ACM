# https://helloacm.com/teaching-kids-programming-remove-one-element-to-make-the-array-strictly-increasing-lis-algorithms/
# https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/
# EASY, MATH, BINARY SEARCH

class Solution:
    def canBeIncreasing(self, nums: List[int]) -> bool:
        lis = []
        for i in nums:
            idx = bisect.bisect_left(lis, i)
            if idx == len(lis):
                lis.append(i)
            else:
                lis[idx] = i
        return len(lis) + 1 >= len(nums)
