# https://helloacm.com/algorithm-to-find-the-longest-alliteration/
# https://binarysearch.com/problems/Longest-Alliteration
# EASY, STRING

class Solution:
    def solve(self, words):
        l = len(words)
        if l == 0:
            return 0
        i, ans, p = 1, 1, 0
        while i < l:
            if words[i][0] != words[p][0]:
                p = i
            else:
                ans = max(ans, i - p + 1)
            i += 1
        return ans
