# https://helloacm.com/teaching-kids-programming-minimum-difference-between-highest-and-lowest-of-k-scores/
# https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
# EASY, SORTING

class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums.sort()
        # return min(nums[i + k - 1] - nums[i] for i in range(len(nums) - k + 1))
        return min(nums[i] - nums[i - k + 1] for i in range(k - 1, len(nums)))
