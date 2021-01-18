# https://helloacm.com/number-of-rectangles-that-can-form-the-largest-square/
# https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
# EASY, MATH

class Solution:
    def countGoodRectangles(self, rectangles: List[List[int]]) -> int:
        maxLength = 0
        for a, b in rectangles:
            maxLength = max(maxLength, min(a, b))
        ans = 0
        for a, b in rectangles:
            if min(a, b) >= maxLength:
                ans += 1
        return ans
