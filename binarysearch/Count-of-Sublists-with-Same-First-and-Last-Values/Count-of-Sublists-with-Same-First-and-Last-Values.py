# https://helloacm.com/teaching-kids-programming-count-of-sublists-with-same-first-and-last-values/
# https://binarysearch.com/problems/Count-of-Sublists-with-Same-First-and-Last-Values
# MEDIUM, HASH MAP

class Solution:
    def solve(self, nums):
        ans = 0
        seen = defaultdict(int)
        for i in nums:
            seen[i] += 1
            ans += seen[i]
        return ans
