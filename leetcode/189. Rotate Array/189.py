# https://helloacm.com/teaching-kids-programming-algorithms-to-rotate-an-array/
# https://leetcode.com/problems/rotate-array/
# MEDIUM, ARRAY

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        k %= len(nums)
        nums[k:], nums[:k] = nums[:-k], nums[-k:]        
        return nums
