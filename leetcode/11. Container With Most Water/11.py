# https://helloacm.com/teaching-kids-programming-container-with-most-water-two-pointer-algorithm/
# https://leetcode.com/problems/container-with-most-water/
# MEDIUM, MATH, TWO POINTER

class Solution:
    def maxArea(self, height: List[int]) -> int:
        n = len(height)
        ans = 0
        L = 0
        R = n - 1
        while L < R:
            ans = max(ans, min(height[L], height[R]) * (R - L))
            if height[L] <= height[R]:
                L += 1
            else:
                R -= 1
        return ans
