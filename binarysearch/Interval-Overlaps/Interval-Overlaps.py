# https://helloacm.com/teaching-kids-programming-interval-overlaps-via-two-pointer-algorithm/
# https://binarysearch.com/problems/Interval-Overlaps
# MEDIUM, MATH, TWO POINTER

class Solution:
    def solve(self, A, B):
        ans = []
        i = 0
        j = 0
        while i < len(A) and j < len(B):
            start = max(A[i][0], B[j][0])
            end = min(A[i][1], B[j][1])
            if start <= end:
                ans.append([start, end])
            if A[i][1] < B[j][1]:
                i += 1
            else:
                j += 1
        return ans
