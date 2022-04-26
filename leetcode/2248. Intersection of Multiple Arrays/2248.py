# https://helloacm.com/teaching-kids-programming-intersection-of-multiple-arrays-set-and-counter/
# https://leetcode.com/problems/intersection-of-multiple-arrays/
# EASY, HASH MAP

class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        n = len(nums)
        c = Counter()
        for i in nums:
            c.update(Counter(i))       
        return sorted(i for i, j in c.items() if j == n)
