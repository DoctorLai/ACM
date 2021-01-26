# https://helloacm.com/two-pointer-algorithm-to-count-the-sum-of-three-numbers-less-than-target/
# https://binarysearch.com/problems/Sum-of-Three-Numbers-Less-than-Target
# MEDIUM, TWO POINTER

class Solution:
    def solve(self, nums, target):
        nums.sort()
        ans = 0
        for i in range(len(nums)):
            j, k = i + 1, len(nums) - 1
            while j < k:
                if nums[i] + nums[j] + nums[k] < target:
                    ans += k - j
                    j += 1
                else:
                    k -= 1
        return ans
