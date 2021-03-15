# https://helloacm.com/hash-algorithm-to-check-a-list-containing-almost-same-strings-differ-by-one-character/
# https://binarysearch.com/problems/Almost-Same-Strings
# MEDIUM, HASH TABLE

class Solution:
    def solve(self, words):
        seen = set()
        for i in words:
            for j in range(len(i)):
                s = i[:j] + "*" + i[j + 1:]
                if s in seen:
                    return True
                seen.add(s)
        return False
