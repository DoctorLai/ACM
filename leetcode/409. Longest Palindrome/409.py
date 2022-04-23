# https://helloacm.com/teaching-kids-programming-longest-palindrome-string-from-set-of-characters/
# https://leetcode.com/problems/longest-palindrome/
# EASY, HASH MAP

class Solution:
    def longestPalindrome(self, s: str) -> int:
        d = collections.Counter(s)
        ans = 0
        odd = 0
        for key in d:
            if d[key] % 2 == 0:
                ans += d[key]
            else:
                ans += d[key] - 1
                odd = 1
        ans += odd
        return ans
