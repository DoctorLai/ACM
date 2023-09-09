# https://helloacm.com/teaching-kids-programming-two-algorithms-to-find-all-numbers-disappeared-in-an-array/
# https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
# EASY, HASH MAP

class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ans = []
        seen = set(nums)
        n = len(nums)
        for i in range(1, n + 1):
            if i not in seen:
                ans.append(i)
        return ans
