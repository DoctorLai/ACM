# https://helloacm.com/teaching-kids-programming-count-the-intersection-points-given-intervals-line-sweep-algorithm/
# https://leetcode.com/problems/points-that-intersect-with-cars/
# EASY, LINE SWEEP

class Solution:
    def numberOfPoints(self, nums: List[List[int]]) -> int:
        if not nums:
            return 0
        nums.sort(key=lambda x: x[0])
        prev = -inf
        ans = 0
        for a, b in nums:
            if a > prev:
                ans += b - a + 1
            else:
                ans += max(0, b - prev)
            prev = max(prev, b)            
        return ans
