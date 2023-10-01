# https://helloacm.com/teaching-kids-programming-minimum-operations-to-reduce-x-to-zero-two-pointer-sliding-window-algorithm/
# https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
# MEDIUM, SLIDING WINDOW, TWO POINTER

class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        n = len(nums)
        total = sum(nums)
        T = total - x
        L = 0
        R = 0
        ans = -1
        s = 0
        while R < n:
            s += nums[R]
            while s > T and L <= R:
                s -= nums[L]
                L += 1
            if s == T:
                ans = max(ans, R - L + 1)
            R += 1
        return n - ans if ans != -1 else -1

