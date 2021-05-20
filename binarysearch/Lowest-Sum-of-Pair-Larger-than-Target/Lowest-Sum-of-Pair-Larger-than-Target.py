# https://helloacm.com/teaching-kids-programming-lowest-sum-of-pair-larger-than-target-via-two-pointer/
# https://binarysearch.com/problems/Lowest-Sum-of-Pair-Larger-than-Target
# MEDIUM, TWO POINTER, MATH

class Solution:
    def solve(self, nums, target):
        nums.sort()
        left, right = 0, len(nums) - 1
        ans = math.inf
        while left < right:
            x = nums[left] + nums[right]
            if x > target:
                ans = min(ans, x)
                right -= 1
            else:
                left += 1
        return ans
