// https://helloacm.com/teaching-kids-programming-paint-fences-no-3-consecutive-same-colours-top-down-dynamic-programming-algorithm-recursion-memoization/
// https://leetcode.com/problems/paint-fence/

class Solution:
    def numWays(self, n: int, k: int) -> int:
        if n == 0:
            return 0
        if n == 1:
            return k        
        a, b = k, k * k
        for i in range(3, n + 1):
            a, b = b, (k - 1) * (a + b)
        return b
