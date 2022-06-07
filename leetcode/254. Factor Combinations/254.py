# https://helloacm.com/teaching-kids-programming-backtracking-algorithm-to-find-factor-combinations-math-recursive-depth-first-search/
# https://leetcode.com/problems/factor-combinations/
# MEDIUM, DFS

class Solution:
    def getFactors(self, n: int) -> List[List[int]]:
        ans = []
        
        def dfs(n, s, c):
            for i in range(s, int(n**0.5) + 1):
                if n % i == 0:
                    c += [i]
                    ans.append(c[:] + [n // i])
                    dfs(n // i, i, c)
                    c.pop()
        
        dfs(n, 2, [])
        return ans
