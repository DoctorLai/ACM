# https://helloacm.com/teaching-kids-programming-arithmetic-sequence-permutation/
# https://binarysearch.com/problems/Arithmetic-Sequence-Permutation
# EASY, MATH

class Solution:
    def solve(self, nums):
        nums.sort()
        for i in range(1, len(nums)):
            if nums[i] - nums[i - 1] != nums[1] - nums[0]:
                return False
        return True
