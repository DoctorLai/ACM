# https://helloacm.com/dynamic-programming-algorithms-to-count-the-stepping-numbers/
# https://binarysearch.com/problems/Stepping-Numbers
# MEDIUM, DP

class Solution:
    def solve(self, n):
        ans = 0        
        M = 1e9+7
        if n == 1:
            return 10
        @lru_cache(maxsize=None)
        def dfs(last, left):
            nonlocal ans, n, M
            if left == 0:
                return 1
            ans = 0
            if last < 9:
                ans = (ans + dfs(last + 1, left - 1)) % M
            if last > 0:
                ans = (ans + dfs(last - 1, left - 1)) % M
            return ans
        for i in range(1, 10):
            ans = (ans + dfs(i, n - 1)) % M
        return ans
