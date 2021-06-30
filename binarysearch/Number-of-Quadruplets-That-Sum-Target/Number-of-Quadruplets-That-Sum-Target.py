# https://helloacm.com/teaching-kids-programming-number-of-quadruplets-that-sum-target-via-hash-table/
# https://binarysearch.com/problems/Number-of-Quadruplets-That-Sum-Target
# MEDIUM, HASH TABLE

class Solution:
    def solve(self, A, B, C, D, target):
        cnt = 0
        m = defaultdict(int)
        for a in A:
            for b in B:
                m[a + b] += 1
        for c in C:
            for d in D:
                cnt += m[target - c - d]
        return cnt
