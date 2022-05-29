# https://helloacm.com/teaching-kids-programming-break-a-string-into-words-word-break-via-recursion-with-memoziation-top-down-dynamic-programming-algorithm/
# https://leetcode.com/problems/word-break/
# MEDIUM, DFS

class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        w = set(wordDict)
        
        @cache
        def dfs(i):
            if i == len(s):
                return True
            for j in range(i + 1, len(s) + 1):
                if s[i:j] in w and dfs(j):
                    return True
            return False
        
        return dfs(0)
