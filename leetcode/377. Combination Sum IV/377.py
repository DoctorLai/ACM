# https://helloacm.com/teaching-kids-programming-combination-sum-up-to-target-unique-numbers-by-dynamic-programming-algorithms/
# https://leetcode.com/problems/combination-sum-iv/
# MEDIUM, DP

class Solution:
    def combinationSum4(self, nums: List[int], target: int) -> int:
        n = len(nums)
        dp = [0] * (target + 1)
        dp[0] = 1
        for i in range(1, target + 1):
            for j in nums:
                if i >= j:
                    dp[i] += dp[i - j]
        return dp[-1]
