# https://helloacm.com/teaching-kids-programming-packing-boxes-algorithm-using-groupby/
# https://binarysearch.com/problems/Packing-Boxes
# MEDIUM, ONE-LINER

class Solution:
    def solve(self, nums):
        return [list(y) for x, y in groupby(nums)]
