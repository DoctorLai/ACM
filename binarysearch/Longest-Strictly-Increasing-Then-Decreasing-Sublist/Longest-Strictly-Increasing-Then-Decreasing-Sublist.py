# https://helloacm.com/teaching-kids-programming-longest-strictly-increasing-then-decreasing-sublist/
# https://binarysearch.com/problems/Longest-Strictly-Increasing-Then-Decreasing-Sublist
# MEDIUM, DP

class Solution:
    def solve(self, nums):
        n = len(nums)
        lis = [1] * n
        lds = [1] * n
        for i in range(1, n):
            if nums[i] > nums[i - 1]:
                lis[i] += lis[i - 1]
        for i in range(n - 2, -1, -1):
            if nums[i] > nums[i + 1]:
                lds[i] += lds[i + 1]
        ans = 0
        for i in range(n):
            a = lis[i]
            b = lds[i]
            if a > 1 and b > 1:
                ans = max(ans, a + b - 1)
        return ans
