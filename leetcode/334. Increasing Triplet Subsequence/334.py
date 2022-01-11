# https://helloacm.com/teaching-kids-programming-increasing-triplet-subsequence-algorithm/
# https://leetcode.com/problems/increasing-triplet-subsequence/
# MEDIUM, MATH

class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        a = b = math.inf
        for i in nums:
            if i <= a:
                a = i
            elif i <= b:
                b = i
            else:
                return True
        return False
