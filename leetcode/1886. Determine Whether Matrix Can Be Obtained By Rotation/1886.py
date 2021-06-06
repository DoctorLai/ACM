# https://helloacm.com/algorithms-to-determine-whether-matrix-can-be-obtained-by-rotation/
# https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
# EASY, MATH

class Solution:
    def findRotation(self, mat: List[List[int]], target: List[List[int]]) -> bool:
        def rotate(M):
            if not M:
                return M
            rows, cols = len(M), len(M[0])
            for i in range(rows):
                for j in range(i):
                    M[i][j], M[j][i] = M[j][i], M[i][j]
            for i in range(rows):
                M[i] = M[i][::-1]
            return M
        for i in range(4):
            if mat == target:
                return True
            rotate(mat)
        return False
