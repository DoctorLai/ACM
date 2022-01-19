# https://helloacm.com/teaching-kids-programming-duplicate-numbers-of-max-distance-in-array-sliding-window-two-pointer-algorithms/
# https://leetcode.com/problems/contains-duplicate-ii/
# MEDIUM, SLIDING WINDOW

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        data = set()
        for i, j in enumerate(nums):
            if i > k:
                data.remove(nums[i - k - 1])
            if j in data:
                return True
            data.add(j)
        return False
