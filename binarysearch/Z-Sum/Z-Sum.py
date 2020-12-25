# https://helloacm.com/compute-the-z-sum-of-a-matrix/
# https://binarysearch.com/problems/Z-Sum
# EASY, MATH

class Solution:
    def solve(self, matrix):
        first = sum(matrix[0])
        last = sum(matrix[-1])
        ans = first + last
        for i in range(1, len(matrix) - 1):
            ans += matrix[i][len(matrix) - i - 1]
        return ans
