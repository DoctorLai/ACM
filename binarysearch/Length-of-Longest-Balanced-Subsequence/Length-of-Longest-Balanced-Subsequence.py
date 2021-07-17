# https://helloacm.com/teaching-kids-programming-length-of-longest-balanced-subsequence/
# https://binarysearch.com/problems/Length-of-Longest-Balanced-Subsequence
# MEDIUM, STRING, STACK

class Solution:
    def solve(self, s):
        ans = bal = 0
        for i in s:
            if i == '(':
                bal += 1
            else:
                bal -= 1
                if bal >= 0:
                    ans += 1
                else:
                    bal = 0
        return ans << 1
