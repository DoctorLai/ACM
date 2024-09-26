# https://helloacm.com/teaching-kids-programming-generate-binary-strings-without-adjacent-zeros-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/generate-binary-strings-without-adjacent-zeros/
# MEDIUM, DFS, RECURSION

class Solution:
    def validStrings(self, n: int) -> List[str]:
        def dfs(cur):
            if len(cur) == n:
                self.ans.append("".join(cur))
                return
            if len(cur) == 0 or cur[-1] == '1':
                dfs(cur + ["0"])
            dfs(cur + ["1"])
        
        self.ans = []
        dfs([])
        return self.ans
