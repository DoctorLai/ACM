# https://helloacm.com/math-algorithm-to-count-substrings-with-all-1s/
# https://binarysearch.com/problems/Count-Substrings-With-All-1s
# MEDIUM, MATH

class Solution:
    def solve(self, s):
        ans = 0
        for i in s.split('0'):
            ans += len(i) * (len(i) + 1) // 2
        return ans
        
