# https://helloacm.com/teaching-kids-programming-minimum-operations-to-collect-elements/
# https://leetcode.com/problems/minimum-operations-to-collect-elements/
# EASY, HASH MAP, SET

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        seen = set()
        for i, v in enumerate(reversed(nums)):
            if v <= k:
                seen.add(v)
                if len(seen) == k:
                    return i + 1
        return -1

