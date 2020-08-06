# https://helloacm.com/how-to-find-all-duplicates-in-an-array-using-python/
# https://leetcode.com/problems/find-all-duplicates-in-an-array/
# MEDIUM

class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        c = collections.Counter(nums)
        return set([x for x in nums if c[x] > 1])
