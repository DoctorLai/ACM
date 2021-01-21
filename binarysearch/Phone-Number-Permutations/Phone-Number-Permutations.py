# https://helloacm.com/depth-first-search-algorithm-to-perform-phone-number-permutations/
# https://binarysearch.com/problems/Phone-Number-Permutations
# MEDIUM, DFS

class Solution:
    def solve(self, digits):
        m = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"
        }
        ans = []
        def dfs(cur):
            if len(cur) == len(digits):
                ans.append(cur)
                return
            for n in m[digits[len(cur)]]:
                dfs(cur + n)
        dfs("")
        return ans
