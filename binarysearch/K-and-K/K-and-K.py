# https://helloacm.com/teaching-kids-programming-finding-largest-k-value-with-its-negative-in-array-using-hash-table-set-k-and-k/
# https://binarysearch.com/problems/K-and-K
# EASY, HASH TABLE

class Solution:
    def solve(self, nums):
        ans = -math.inf
        seen = set(nums)
        for i in seen:
            if -i in seen:
                ans = max(ans, -i)
        return ans if ans != -math.inf else -1
