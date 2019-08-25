# https://helloacm.com/compute-the-minimum-costs-to-connect-the-sticks-using-priority-queue-or-heap/
# https://leetcode.com/problems/minimum-cost-to-connect-sticks/

class Solution:
    def connectSticks(self, sticks: List[int]) -> int:
        heapq.heapify(sticks)
        res = 0
        while len(sticks) > 1:
            a = heapq.heappop(sticks)
            b = heapq.heappop(sticks)
            heapq.heappush(sticks, a + b)
            res += a + b
        return res
