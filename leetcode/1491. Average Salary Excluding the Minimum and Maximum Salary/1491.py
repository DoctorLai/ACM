# https://helloacm.com/teaching-kids-programming-compute-average-of-an-array-excluding-max-and-min/
# https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
# EASY, MATH

class Solution:
    def average(self, A: List[int]) -> float:       
        maxv, minv = A[0], A[0]
        s = 0
        for i in A:
            maxv = max(maxv, i)
            minv = min(minv, i)
            s += i
        return (s - maxv - minv) / (len(A) - 2)
