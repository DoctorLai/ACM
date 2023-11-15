# https://helloacm.com/teaching-kids-programming-length-of-the-longest-subsequence-that-sums-to-target-recursionmemoizationtop-down-dynamic-programming/
# https://leetcode.com/problems/length-of-the-longest-subsequence-that-sums-to-target/
# MEDIUM, DP, KNAPSACK

class Solution:
    def lengthOfLongestSubsequence(self, nums: List[int], target: int) -> int:
        nums.sort(reverse=True)

        @cache
        def f(i, x):
            if i == len(nums):
                return 0 if x == 0 else -inf
            if x < 0:
                return -inf
            
            a = f(i + 1, x - nums[i])
            if a != -inf:
                a += 1
            b = f(i + 1, x)
            return max(a, b)

        ans = f(0, target)
        f.cache_clear()
        return ans if ans != -inf else -1
