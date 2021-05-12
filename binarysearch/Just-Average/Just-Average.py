# https://helloacm.com/teaching-kids-programming-remove-one-number-to-make-average/
# https://binarysearch.com/problems/Just-Average
# EASY, MATH

class Solution:
    def solve(self, nums, k):
        return (sum(nums) - (len(nums) - 1) * k) in nums
