# https://helloacm.com/teaching-kids-programming-number-of-zero-filled-subarrays-groupby-algorithm-math-counting/
# https://leetcode.com/problems/number-of-zero-filled-subarrays/
# MEDIUM, MATH

class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        ans = 0
        c = 0
        for i in nums:
            if i == 0:
                c += 1
                ans += c
            else:
                c = 0
        return ans
