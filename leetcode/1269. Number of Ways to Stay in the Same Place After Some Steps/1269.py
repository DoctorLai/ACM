# https://helloacm.com/teaching-kids-programming-number-of-ways-to-stay-in-the-same-place-after-some-steps-top-down-dynamic-programming-algorithm-recursion-with-memoization/
# https://leetcode.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/
# HARD, DP, RECURSION

class Solution:
    def numWays(self, steps: int, arrLen: int) -> int:
        MOD = 1_000_000_007

        @cache
        def f(x, r):
            if r == 0:
                return x == 0
            if x > r or x < 0 or x >= arrLen:
                return 0

            a = f(x, r - 1) % MOD
            b = f(x - 1, r - 1) % MOD
            c = f(x + 1, r - 1) % MOD
            return (a + b + c) % MOD

        return f(0, steps)

