# https://helloacm.com/parentheses-grouping-algorithm/
# https://binarysearch.com/problems/Parentheses-Grouping
# EASY

class Solution:
    def solve(self, s):
        ans = []
        b, c = 0, ""
        for i in s:
            c += i
            if i == '(':
                b += 1
            elif i == ')':
                b -= 1
                if b == 0:
                    ans.append(c)
                    c = ""
        return ans
