# https://helloacm.com/teaching-kids-programming-flip-one-digit-via-greedy-algorithm/
# https://binarysearch.com/problems/123-Number-Flip
# EASY, MATH, GREEDY

class Solution:
    def solve(self, n):
        arr = list(str(n))
        for i,j in enumerate(arr):
            if j != '3':
                arr[i] = '3'
                break
        return int(''.join(arr))
