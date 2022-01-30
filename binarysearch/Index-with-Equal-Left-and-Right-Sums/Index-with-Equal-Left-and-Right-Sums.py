# https://helloacm.com/teaching-kids-programming-index-with-equal-left-and-right-sums-prefix-and-suffix-sum-algorithm/
# https://binarysearch.com/problems/Index-with-Equal-Left-and-Right-Sums
# EASY, PREFIX SUM

class Solution:
    def solve(self, nums):
        left = [0] + list(accumulate(nums))
        total = sum(nums)
        for i in range(len(nums)):
            if left[i] == total - left[i + 1]:
                return i
        return -1
