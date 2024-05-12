# https://helloacm.com/teaching-kids-programming-count-alternating-subarrays-dynamic-programming-algorithms/
# https://leetcode.com/problems/count-alternating-subarrays/
# MEDIUM, DP

class Solution:
    def countAlternatingSubarrays(self, nums: List[int]) -> int:
        ## Dynamic Programming - O(N) time, O(1) space
        ans = size = 1
        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1]:
                size = 1
            else:
                size += 1
            ans += size
        return ans
