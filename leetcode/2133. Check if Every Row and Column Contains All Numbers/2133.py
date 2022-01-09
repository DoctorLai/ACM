# https://helloacm.com/teaching-kids-programming-check-if-every-row-and-column-contains-all-numbers-xor-and-hash-set/
# https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/
# EASY, MATH

class Solution:
    def checkValid(self, matrix: List[List[int]]) -> bool:
        n = set(range(1, len(matrix) + 1))
        for r in matrix:
            if set(r) != n:
                return False
        for c in zip(*matrix):
            if set(c) != n:
                return False
        return True
