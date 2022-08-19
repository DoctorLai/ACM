# https://helloacm.com/teaching-kids-programming-algorithms-to-count-equal-row-and-column-pairs-using-hash-map/
# https://leetcode.com/problems/equal-row-and-column-pairs/
# MEDIUM, HASH MAP

class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:   
        rows = Counter(tuple(r) for r in grid)
        return sum(rows[k] for k in zip(*grid))
