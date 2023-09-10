# https://helloacm.com/teaching-kids-programming-furthest-point-from-origin-hash-map/
# https://leetcode.com/problems/furthest-point-from-origin/
# EASY, MATH, HASH MAP

class Solution:
    def furthestDistanceFromOrigin(self, s: str) -> int:
        C = Counter(s)
        L = C['L']
        R = C['R']
        X = C['_']
        return abs(L - R) + X
