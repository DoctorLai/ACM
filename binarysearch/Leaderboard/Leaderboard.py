# https://helloacm.com/teaching-kids-programming-leaderboard-algorithm-compute-the-ranking-of-numbers/
# https://binarysearch.com/problems/Leaderboard
# EASY, HASH TABLE

class Solution:
    def solve(self, nums):
        data = list(set(nums))
        data.sort(reverse=True)
        rank = {a: b for b, a in enumerate(data)}
        return [rank[n] for n in nums]
