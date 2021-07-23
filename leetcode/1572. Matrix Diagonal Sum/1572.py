# https://helloacm.com/teaching-kids-programming-square-matrix-diagonal-sum/
# https://leetcode.com/problems/matrix-diagonal-sum/
# EASY, MATH

class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        n = len(mat)
        if n == 1:
            return mat[0][0]
        ans = 0
        for i in range(n):
            ans += mat[i][i]
            j = n - i - 1
            if j != i:
                ans += mat[i][j]
        return ans
