# https://helloacm.com/teaching-kids-programming-rearrange-characters-to-make-target-string-hash-map/
# https://leetcode.com/problems/rearrange-characters-to-make-target-string/
# EASY, HASH MAP

class Solution:
    def rearrangeCharacters(self, s: str, target: str) -> int:
        T = Counter(target)
        S = Counter(s)
        return min((S[i]//T[i] for i in T), default=0)
