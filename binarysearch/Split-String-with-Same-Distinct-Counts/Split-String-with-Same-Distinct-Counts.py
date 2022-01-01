# https://helloacm.com/teaching-kids-programming-split-string-with-same-distinct-counts-sliding-window/
# https://binarysearch.com/problems/Split-String-with-Same-Distinct-Counts
# MEDIUM, SLIDING WINDOW

class Solution:
    def solve(self, s):
        if not s:
            return 0
        c1 = Counter()
        c2 = Counter(s)
        ans = 0
        for i in range(len(s) - 1):
            c1[s[i]] += 1
            c2[s[i]] -= 1
            if c2[s[i]] == 0:
                del c2[s[i]]
            if len(c1.keys()) == len(c2.keys()):
                ans += 1
        return ans
