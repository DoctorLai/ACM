# https://helloacm.com/teaching-kids-programming-algorithms-to-take-max-min-from-numbers-array-and-push-square-root-back/
# https://leetcode.com/problems/take-gifts-from-the-richest-pile/
# EASY, HEAP

class Solution:
    def pickGifts(self, A: List[int], k: int) -> int:
        A = [-i for i in A]
        heapify(A)
        for _ in range(k):
            x = -heappop(A)
            heappush(A, -isqrt(x))
        return -sum(A)
