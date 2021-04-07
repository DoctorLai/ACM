# https://leetcode.com/problems/merge-intervals/
# https://helloacm.com/linear-algorithm-to-merge-intervals/
# MEDIUM, MATH

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        ans = []
        for a, b in intervals:
            if not ans or ans[-1][1] < a:
                ans.append([a, b])
            else:
                ans[-1][1] = max(ans[-1][1], b)
        return ans
