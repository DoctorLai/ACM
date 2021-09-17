# https://helloacm.com/teaching-kids-programming-swap-characters-to-equalize-strings/
# https://binarysearch.com/problems/Swap-Characters-to-Equalize-Strings
# EASY, STRING, HASH TABLE

class Solution:
    def solve(self, s, t):
        a = Counter(s)
        a.update(t)
        return all(i & 1 == 0 for i in a.values())
