# https://helloacm.com/teaching-kids-programming-build-array-from-permutation/
# https://leetcode.com/problems/build-array-from-permutation/
# EASY, ARRAY

class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        return [nums[nums[i]] for i in range(len(nums))]
