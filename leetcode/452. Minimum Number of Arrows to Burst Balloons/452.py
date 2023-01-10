# https://helloacm.com/teaching-kids-programming-minimum-number-of-arrows-to-burst-balloons-greedy-algorithm/
# https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
# MEDIUM, GREEDY

class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        if not points:
            return 0
        points.sort(key=lambda x: x[1])
        ans = 1
        end = points[0][1]
        for a, b in points[1:]:
            if end < a:
                end = b
                ans += 1
        return ans
