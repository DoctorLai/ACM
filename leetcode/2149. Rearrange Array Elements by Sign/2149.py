# https://helloacm.com/teaching-kids-programming-rearrange-array-elements-by-sign-two-pointer-algorithm/
# https://leetcode.com/problems/rearrange-array-elements-by-sign/
# MEDIUM, ARRAY

class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos = [x for x in nums if x > 0]
        neg = [x for x in nums if x < 0]
        nums[0::2], nums[1::2] = pos, neg
        return nums        
