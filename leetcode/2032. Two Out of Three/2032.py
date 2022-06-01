# https://helloacm.com/teaching-kids-programming-find-numbers-in-at-least-two-arrays-out-of-three-hash-set/
# https://leetcode.com/problems/two-out-of-three/
# EASY, HASH MAP

class Solution:
    def twoOutOfThree(self, nums1: List[int], nums2: List[int], nums3: List[int]) -> List[int]:
        s1 = set(nums1)
        s2 = set(nums2)
        s3 = set(nums3)        
        return s1&s2 | s2&s3 | s1&s3
