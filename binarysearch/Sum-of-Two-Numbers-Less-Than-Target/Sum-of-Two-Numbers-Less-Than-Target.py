# https://helloacm.com/teaching-kids-programming-sum-of-two-numbers-less-than-target-using-two-pointer-algorithm/
# https://binarysearch.com/problems/Sum-of-Two-Numbers-Less-Than-Target
# EASY, TWO POINTER, MATH

class Solution:
    def solve(self, nums, target):
        nums.sort()
        i, j = 0, len(nums) - 1
        ans = -math.inf
        while i < j:
            x = nums[i] + nums[j]
            if x < target:
                ans = max(ans, x)
                i += 1
            else:
                j -= 1
        return ans
