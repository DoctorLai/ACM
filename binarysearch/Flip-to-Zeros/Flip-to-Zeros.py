# https://helloacm.com/teaching-kids-programming-flip-to-zeros/
# https://binarysearch.com/problems/Flip-to-Zeros
# EASY, MATH

class Solution:
    def solve(self, nums):
        ans = 0
        for i in nums:
            if i ^ (ans & 1) == 1:
                ans += 1
        return ans
