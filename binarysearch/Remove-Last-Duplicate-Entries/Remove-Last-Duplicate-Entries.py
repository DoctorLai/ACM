# https://helloacm.com/teaching-kids-programming-remove-last-duplicate-entries-hash-table/
# https://binarysearch.com/problems/Remove-Last-Duplicate-Entries
# EASY, HASH TABLE

class Solution:
    def solve(self, nums):
        res = []
        x = Counter(nums)
        d = {v: i for i, v in enumerate(nums)}
        for i, v in enumerate(nums):
            if d[v] != i or x[v] == 1:
                res.append(v)
        return res
