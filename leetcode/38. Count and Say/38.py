# https://helloacm.com/teaching-kids-programming-recursive-algorithm-to-count-and-say-a-number-string/
# https://leetcode.com/problems/count-and-say/
# MEDIUM, RECURSION

class Solution:
    def countAndSay(self, n):
        
        @cache
        def f(n):
            if n == 1:
                return "1"
            a = f(n - 1)
            ans = []
            for i, j in itertools.groupby(a):
                ans.append(str(len(list(j))))
                ans.append(i)
            return "".join(ans)

        return f(n)
