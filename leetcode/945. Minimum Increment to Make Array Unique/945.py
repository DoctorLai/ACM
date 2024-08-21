# https://helloacm.com/teaching-kids-programming-minimum-increment-to-make-array-unique-sorting-greedy/
# https://leetcode.com/problems/minimum-increment-to-make-array-unique/description/
# MEDIUM, SORTING, GREEDY

class Solution:
    def minIncrementForUnique(self, nums: List[int]) -> int:
        nums.sort()
        ans = 0
        n = len(nums)
        for i in range(1, n):
            if nums[i] <= nums[i - 1]:
                ans += nums[i - 1] - nums[i] + 1
                nums[i] = nums[i - 1] + 1
        return ans
