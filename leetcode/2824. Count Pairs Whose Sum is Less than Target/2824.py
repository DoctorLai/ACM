# https://helloacm.com/teaching-kids-programming-count-pairs-whose-sum-is-less-than-target-two-pointer-algorithm/
# https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
# EASY, TWO POINTER

class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        nums.sort()
        i = 0
        j = len(nums) - 1
        ans = 0
        while i < j:
            if nums[i] + nums[j] < target:
                ans += j - i
                i += 1
            else:
                j -= 1
        return ans
