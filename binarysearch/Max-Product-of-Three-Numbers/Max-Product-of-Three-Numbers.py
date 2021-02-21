# https://helloacm.com/teaching-kids-programming-compute-the-max-product-of-3-numbers-in-the-array/
# https://binarysearch.com/problems/Max-Product-of-Three-Numbers
# EASY, MATH

class Solution:
    def solve(self, nums):
        nums.sort()
        return max(nums[-1] * nums[-2] * nums[-3], nums[0] * nums[1] * nums[-1])
