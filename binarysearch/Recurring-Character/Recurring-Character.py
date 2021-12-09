# https://helloacm.com/teaching-kids-programming-find-first-recurring-character-using-hash-table-set/
# https://binarysearch.com/problems/Recurring-Character
# EASY, HASH TABLE

class Solution:
    def solve(self, s):
        seen = set()
        for i,j in enumerate(s):
            if j in seen:                
                return i
            seen.add(j)
        return -1
