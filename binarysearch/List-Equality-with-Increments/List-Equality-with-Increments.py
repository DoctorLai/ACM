# https://helloacm.com/algorithm-to-make-a-list-equal-with-increments/
# https://binarysearch.com/problems/List-Equality-with-Increments
# EASY, ARRAY

class Solution:
    def solve(self, nums):
        m = min(nums)
        ans = 0
        for i in nums:
            ans += i - m
        return ans
        
