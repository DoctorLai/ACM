# https://binarysearch.com/problems/Equivalent-Value-and-Frequency
# https://helloacm.com/using-hash-map-to-find-equivalent-value-and-frequency-in-array/
# EASY, HASH TABLE

class Solution:
    def solve(self, nums):
        counts = Counter(nums)
        return any(k == v for k, v in counts.items())
