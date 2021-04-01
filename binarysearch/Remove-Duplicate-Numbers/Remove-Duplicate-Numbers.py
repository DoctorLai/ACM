# https://helloacm.com/remove-duplicate-numbers-by-using-a-hash-map/
# https://binarysearch.com/problems/Remove-Duplicate-Numbers
# MEDIUM, HASH TABLE

class Solution:
    def solve(self, nums):
        c = Counter(nums)
        ans = []
        for a, b in c.items():
            if b == 1:
                ans.append(a)
        return ans
