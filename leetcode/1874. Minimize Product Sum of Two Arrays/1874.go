// https://helloacm.com/algorithm-to-minimize-product-sum-of-two-arrays/
// https://leetcode.com/problems/minimize-product-sum-of-two-arrays/
// MEDIUM, GREEDY

class Solution:
    def minProductSum(self, nums1: List[int], nums2: List[int]) -> int:
        nums1.sort()
        nums2.sort(reverse=True)
        ans = 0
        for i in range(len(nums1)):
            ans += nums1[i] * nums2[i]
        return ans
