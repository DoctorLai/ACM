# https://binarysearch.com/problems/Rotation-of-Another-String
# https://helloacm.com/teaching-kids-programming-rotation-of-another-string/
# EASY, STRING

class Solution:
    def solve(self, s0, s1):
        if len(s0) != len(s1):
            return False
        return s0 in s1 + s1
