# https://helloacm.com/teaching-kids-programming-three-consecutive-odds/
# https://leetcode.com/problems/three-consecutive-odds/
# EASY, MATH, ARRAY

class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        maxCount = 0
        cnt = 0
        for i in arr:
            if i & 1:
                cnt += 1
                maxCount = max(maxCount, cnt)
            else:
                cnt = 0
        return maxCount >= 3
