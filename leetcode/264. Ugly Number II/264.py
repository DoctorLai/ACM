# https://helloacm.com/teaching-kids-programming-using-heap-priority-queue-to-generate-nth-ugly-number/
# https://leetcode.com/problems/ugly-number-ii/
# MEDIUM, MATH, HEAP

from heapq import heappop, heappush

class Solution:
    def nthUglyNumber(self, n: int) -> int:
        seen = set([1])
        heap = [1]
        for _ in range(n):
            cur = heappop(heap)
            for i in [2, 3, 5]:
                new = cur * i
                if new not in seen:
                    seen.add(new)
                    heappush(heap, new)
        return cur
            
