# https://helloacm.com/egg-drop-with-2-eggs-and-n-floors/
# https://leetcode.com/problems/egg-drop-with-2-eggs-and-n-floors/
# MEDIUM, DP

class Solution:
    @cache
    def twoEggDrop(self, n: int) -> int:
        if n == 1 or n == 2:
            return n
        ans = math.inf
        for i in range(1, n + 1):
            ans = min(ans, 1 + max(i, self.twoEggDrop(n - i - 1)))
        return ans
