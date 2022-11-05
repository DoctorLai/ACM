# https://helloacm.com/teaching-kids-programming-largest-perimeter-triangle-sorting-greedy-algorithm/
# https://leetcode.com/problems/largest-perimeter-triangle/
# EASY, GREEDY

class Solution(object):
    def largestPerimeter(self, A):
        A.sort()
        for i in range(len(A) - 3, -1, -1):
            if A[i] + A[i+1] > A[i+2]:
                return A[i] + A[i+1] + A[i+2]
        return 0
