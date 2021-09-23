# https://helloacm.com/teaching-kids-programming-all-odd-palindrome-substrings/
# https://binarysearch.com/problems/Odd-Palindrome
# MEDIUM, STRING

class Solution:
    def solve(self, s):
        return all(s[i] != s[i + 1] for i in range(len(s) - 1))
