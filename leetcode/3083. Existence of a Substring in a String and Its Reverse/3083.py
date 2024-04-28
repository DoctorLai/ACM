# https://helloacm.com/teaching-kids-programming-existence-of-a-substring-in-a-string-and-its-reverse/
# https://leetcode.com/problems/existence-of-a-substring-in-a-string-and-its-reverse/
# EASY, HASH MAP

class Solution:
    def isSubstringPresent(self, s: str) -> bool:
        seen = set()
        for x, y in pairwise(s):
            seen.add((x, y))
            if (y, x) in seen:
                return True
        return False
