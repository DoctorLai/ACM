# https://helloacm.com/teaching-kids-programming-split-the-numbers-into-two-distinct-arrays/
# https://leetcode.com/problems/split-the-array/
# EASY, HASH MAP

class Solution:
    def isPossibleToSplit(self, nums: List[int]) -> bool:
        if len(nums) & 1:
            return False
        c = Counter(nums)
        return max(c.values()) <= 2
