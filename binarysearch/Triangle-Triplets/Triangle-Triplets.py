# https://helloacm.com/two-pointer-algorithm-to-count-triangle-triplets-in-an-array/
# https://binarysearch.com/problems/Triangle-Triplets
# MEDIUM, TWO POINTER

class Solution:
    def solve(self, nums):
        count = 0
        nums.sort()
        n = len(nums)
        for i in range(n - 1, 1, -1):
            l, r = 0, i - 1
            while l < r:
                if nums[l] + nums[r] <= nums[i]:
                    l += 1
                else:
                    count += r - l
                    r -= 1
        return count
