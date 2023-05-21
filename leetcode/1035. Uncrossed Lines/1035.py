# https://helloacm.com/teaching-kids-programming-find-max-number-of-uncrossed-lines-longest-common-subsequence-via-bottom-up-dynamic-programming-algorithm/
# https://leetcode.com/problems/uncrossed-lines/
# MEDIUM, DP

class Solution(object):
    def maxUncrossedLines(self, nums1, nums2):
        n1 = len(nums1)
        n2 = len(nums2)
        dp = [[0] * (n2 + 1) for _ in range(n1 + 1)]

        for i in range(1, n1 + 1):
            for j in range(1, n2 + 1):
                if nums1[i - 1] == nums2[j - 1]:
                    dp[i][j] = dp[i - 1][j - 1] + 1
                else:
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
        return dp[-1][-1]
