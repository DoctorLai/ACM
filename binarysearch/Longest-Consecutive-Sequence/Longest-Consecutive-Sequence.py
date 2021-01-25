# https://binarysearch.com/problems/Longest-Consecutive-Sequence 
# https://helloacm.com/algorithms-to-compute-the-longest-consecutive-sequence/
# MEDIUM, DP

class Solution:
    def solve(self, nums):
        if len(nums) == 0:
            return 0
        d = set(nums)
        dp = defaultdict(int)
        nums.sort()        
        for i in nums:
            dp[i] = max(dp[i], 1)
            if i - 1 in d:
                dp[i] = max(dp[i], dp[i - 1] + 1)
        return max(dp.values())
