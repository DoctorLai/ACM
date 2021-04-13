# https://helloacm.com/teaching-kids-programming-converting-spreadsheet-column-titles-to-number/
# https://binarysearch.com/problems/The-Auditor
# MEDIUM, MATH

class Solution:
    def solve(self, s):
        a = 0
        for i in s:
            a = a * 26 + (ord(i) - 65 + 1)
        return a
