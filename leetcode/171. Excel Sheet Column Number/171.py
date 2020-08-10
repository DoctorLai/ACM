# https://helloacm.com/python-function-to-convert-excel-sheet-column-titles-to-numbers/
# https://leetcode.com/problems/excel-sheet-column-number/
# EASY

class Solution:
    def titleToNumber(self, s: str) -> int:
        ans = 0
        for i in s:
            ans = ans * 26 + ord(i) - 64
        return ans
