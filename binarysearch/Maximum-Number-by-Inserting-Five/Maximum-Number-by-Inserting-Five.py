# https://helloacm.com/teaching-kids-programming-maximum-number-by-inserting-five/
# https://binarysearch.com/problems/Maximum-Number-by-Inserting-Five
# EASY, MATH

class Solution:
    def solve(self, n):
        ans = -math.inf
        s = str(n)
        if n > 0:
            f = 0
        else:
            f = 1
        for i in range(f, len(s) + 1):
            t = s[:i] + '5' + s[i:]
            ans = max(ans, int(t))
        return ans
