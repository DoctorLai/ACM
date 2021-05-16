# https://helloacm.com/teaching-kids-programming-longest-interval-algorithm/
# https://binarysearch.com/problems/Longest-Interval
# MEDIUM, GREEDY, MATH

class Solution:
    def solve(self, intervals):
        if not intervals:
            return 0
        intervals.sort()
        start, end = intervals[0]
        ans = end - start + 1
        for a, b in intervals[1:]:
            if a > end:
                start = a                
            end = max(end, b)
            ans = max(ans, end - start + 1)
        return ans
