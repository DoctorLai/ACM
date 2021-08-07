# https://helloacm.com/teaching-kids-programming-inplace-algorithms-to-remove-elements/
# https://leetcode.com/problems/remove-element/
# EASY, TWO POINTER

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        j = len(nums) - 1
        i = 0
        while i <= j:
            if nums[i] == val:
                nums[i], nums[j] = nums[j], nums[i]
                j -= 1
            else:
                i += 1
        return i        
