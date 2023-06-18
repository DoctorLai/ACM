# https://helloacm.com/teaching-kids-programming-minimum-swaps-to-get-semi-ordered-permutation/
# https://leetcode.com/problems/semi-ordered-permutation/
# EASY, MATH

class Solution:
    def semiOrderedPermutation(self, nums: List[int]) -> int:
        n = len(nums)
        a = nums.index(1)
        b = nums.index(n)
        if a < b:
            return a + n - 1 - b
        return a + n - 1 - b - 1
