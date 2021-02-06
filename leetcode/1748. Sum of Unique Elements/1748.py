# https://leetcode.com/problems/sum-of-unique-elements/
# https://helloacm.com/algorithm-to-sum-of-unique-elements/
# EASY, MATH

class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        x = Counter(nums)
        ans = 0
        for i in nums:
            if x[i] == 1:
                ans += i
        return ans       
