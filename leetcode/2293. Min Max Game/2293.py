# https://helloacm.com/teaching-kids-programming-algorithms-to-solve-a-min-max-binary-tree-game/
# https://leetcode.com/problems/min-max-game/
# EASY, RECURSION

class Solution:
    def minMaxGame(self, nums: List[int]) -> int:
        def f(arr):
            n = len(arr)
            if n == 1:
                return arr
            ans = []
            g = cycle((min, max))
            for i in range(0, n, 2):
                ans.append(next(g)(arr[i], arr[i + 1]))
            return f(ans)       
        return f(nums)[0]
