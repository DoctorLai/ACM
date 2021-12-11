# https://helloacm.com/teaching-kids-programming-find-subsequence-of-length-k-with-the-largest-sum/
# https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/
# EASY, SLIDING WINDOW

class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        n = len(nums)
        assert 0 <= k <= n
        window = nums[:k]
        for i in range(k, n):
            curMin = min(window)
            if nums[i] > curMin:
                window.remove(curMin)
                window.append(nums[i])
        return window
