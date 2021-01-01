# https://helloacm.com/string-clockwise-shift-algorithm/
# https://binarysearch.com/problems/String-Clockwise-Shift
# EASY, STRING

class Solution:
    def solve(self, a, b, k):
        if len(a) != len(b):
            return False
        for i in range(len(a)):
            k -= (ord(b[i]) - ord(a[i]) + 26) % 26
            if k < 0:
                return False
        return True
