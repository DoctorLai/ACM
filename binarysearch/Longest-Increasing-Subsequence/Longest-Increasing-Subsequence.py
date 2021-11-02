# https://helloacm.com/teaching-kids-programming-greedy-algorithm-to-find-longest-increasing-subsequence-in-onlogn-via-binary-search/
# https://binarysearch.com/problems/Longest-Increasing-Subsequence
# MEDIUM, GREEDY

class Solution:
    def solve(self, nums):
        n = len(nums)
        dp = [1] * n
        for i in range(n):
            for j in range(i):
                if nums[i] > nums[j]:
                    dp[i] = max(dp[i], dp[j] + 1)
        return max(dp, default=0)
