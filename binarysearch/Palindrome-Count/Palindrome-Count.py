# https://helloacm.com/teaching-kids-programming-palindrome-count-algorithm/
# https://binarysearch.com/problems/Palindrome-Count
# EASY, MATH

class Solution:
    def solve(self, s, k):
        t = len(set(s))
        return t**(ceil(k/2))
