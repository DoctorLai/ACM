# https://helloacm.com/teaching-kids-programming-largest-sum-of-non-adjacent-numbers-2d-version-disappearing-coins-in-a-matrix/
# https://binarysearch.com/problems/Collecting-Disappearing-Coins
# MEDIUM, DP

class Solution:
    def solve(self, M):

        def f(nums):
            n = len(nums)
            if not n:
                return 0 
            if n == 1:
                return nums[0]
            if n == 2:
                return max(nums)
            dp = [nums[0], max(nums[0], nums[1])]
            for i in range(2, n):
                dp.append(max(dp[-2] + nums[i], dp[-1]))
            return dp[-1]

        return f([f(x) for x in M])
