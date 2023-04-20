# https://helloacm.com/teaching-kids-programming-form-smallest-number-from-two-digit-arrays/
# https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/
# EASY, SET

class Solution:
    def minNumber(self, nums1: List[int], nums2: List[int]) -> int:
        a = set(nums1)
        b = set(nums2)
        c = a & b
        if c:
            return min(c)
        ma = min(a)
        mb = min(b)
        return min(ma * 10 + mb, mb * 10 + ma)
