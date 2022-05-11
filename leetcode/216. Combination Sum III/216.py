# https://helloacm.com/teaching-kids-programming-backtracking-algorithm-to-list-the-combination-sum-recursive-depth-first-search/
# https://leetcode.com/problems/combination-sum-iii/
# MEDIUM, DFS, MATH

class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        ans = []
        if n > 45 or k > 9:
            return []
        
        def dfs(cur, curSum, a):
            if curSum > n or len(cur) > k:
                return
            if curSum == n and len(cur) == k:
                ans.append(cur[:])
                return            
            for i in range(a, 10):
                dfs(cur + [i], curSum + i, i + 1)        
        
        dfs([], 0, 1)
