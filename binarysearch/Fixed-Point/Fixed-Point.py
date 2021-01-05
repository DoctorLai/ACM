# https://helloacm.com/binary-search-algorithm-to-find-the-fixed-point/
# https://binarysearch.com/problems/Fixed-Point
# EASY, BINARY SEARCH

class Solution:
    def solve(self, nums):
        if len(nums) == 0:
            return -1
        left = 0
        right = len(nums) - 1
        ans = float("inf")
        while left <= right:
            mid = left + (right - left) // 2
            if nums[mid] < mid:
                left = mid + 1
            elif nums[mid] > mid:
                right = mid - 1
            else:
                ans = mid
                right = mid - 1
        if ans == float("inf"):
            return -1
        return ans
