# https://helloacm.com/teaching-kids-programming-minimum-split-into-subarrays-with-gcd-greater-than-one-greedy-algorithm/
# https://leetcode.com/problems/minimum-split-into-subarrays-with-gcd-greater-than-one/description/
# MEDIUM, GREEDY

class Solution:
    def minimumSplits(self, nums: List[int]) -> int:
        ans, cur = 0, 1
        for i, j in enumerate(nums):
            cur = gcd(cur, j)
            if cur == 1:
                ans += 1
                cur = j
        return ans
