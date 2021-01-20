# https://helloacm.com/algorithms-to-count-the-equivalent-pairs-in-an-array/
# https://binarysearch.com/problems/Equivalent-Pairs
# EASY, MATH, HASH TABLE

class Solution:
    def solve(self, nums):
        data = defaultdict(int)
        ans = 0
        for i in nums:
            ans += data[i]
            data[i] += 1
        return ans
