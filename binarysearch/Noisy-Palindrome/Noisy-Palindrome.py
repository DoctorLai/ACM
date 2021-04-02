# https://helloacm.com/noisy-palindrome-algorithm-check-lowercase-palindrome-strings/
# https://binarysearch.com/problems/Noisy-Palindrome
# EASY, TWO POINTER

class Solution:
    def solve(self, s):
        i, j = 0, len(s) - 1
        while i <= j:
            while (not s[i].islower()) and i < j:
                i += 1
            while (not s[j].islower()) and i < j:
                j -= 1
            if s[i] != s[j]:
                return False
            i += 1
            j -= 1
        return True
