# https://helloacm.com/teaching-kids-programming-algorithms-to-compute-the-minimum-string-length-after-removing-substrings-brute-force-stack/
# https://leetcode.com/problems/minimum-string-length-after-removing-substrings/
# EASY, STACK

class Solution:
    def minLength(self, s: str) -> int:
        a = []
        for i in s:
            if a and a[-1] + i in ("AB", "CD"):
                a.pop()
            else:
                a.append(i)
        return len(a)
