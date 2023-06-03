# https://helloacm.com/teaching-kids-programming-remove-trailing-zeros-from-a-string-strip-lstrip-rstrip/
# https://leetcode.com/problems/remove-trailing-zeros-from-a-string/
# EASY, STRING

class Solution:
    def removeTrailingZeros(self, num: str) -> str:
        return num.rstrip('0')
