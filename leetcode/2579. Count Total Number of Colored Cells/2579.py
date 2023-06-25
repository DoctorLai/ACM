# https://helloacm.com/teaching-kids-programming-algorithms-to-count-total-number-of-colored-cells-math-recursion-dynamic-programming/
# https://leetcode.com/problems/count-total-number-of-colored-cells/
# MEDIUM, MATH

class Solution:
    def coloredCells(self, n: int) -> int:
        return 2*n*n-2*n+1
