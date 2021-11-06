# https://helloacm.com/teaching-kids-programming-remove-duplicates-from-sorted-array/
# https://leetcode.com/problems/remove-duplicates-from-sorted-array/
# EASY, TWO POINTER

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        a = 1
        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:
                nums[a] = nums[i]
                a += 1
        return a
