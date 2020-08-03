# https://helloacm.com/bruteforce-and-rolling-hash-algorithm-to-compute-the-longest-happy-prefix-string-equal-prefix-and-suffix/
# https://leetcode.com/problems/longest-happy-prefix/

class Solution:
    def longestPrefix(self, s: str) -> str:
        l = 0
        r = 0
        p = 1
        m = 1e9 + 7
        k = 0
        for i in range(len(s) - 1):
            l = (l * 128 + ord(s[i])) % m
            r = (r + p * ord(s[len(s) - i - 1])) % m
            if l == r:
                k = i + 1
            p = (p * 128) % m
        return s[:k]
