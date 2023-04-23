# https://helloacm.com/teaching-kids-programming-find-the-width-of-columns-of-a-grid-zip-function-matrix-transpose/
# https://leetcode.com/problems/find-the-width-of-columns-of-a-grid/
# EASY, MATRIX, MATH

class Solution:
    def findColumnWidth(self, grid: List[List[int]]) -> List[int]:        
        return [max(len(str(s)) for s in r) for r in zip(*grid)]
