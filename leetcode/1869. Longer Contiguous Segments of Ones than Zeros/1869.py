# https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/
# https://helloacm.com/teaching-kids-programming-longer-contiguous-segments-of-ones-than-zeros-in-a-binary-string-three-algorithms/
# EASY, GROUPBY

class Solution:
    def checkZeroOnes(self, s: str) -> bool:
        c = Counter()
        for i, a in itertools.groupby(s):
            c[i] = max(c[i], len(list(a)))
        return c['1'] > c['0']
