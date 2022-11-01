# https://helloacm.com/teaching-kids-programming-determine-if-two-events-have-conflict-intersections-of-two-intervals/
# https://leetcode.com/problems/determine-if-two-events-have-conflict/
# EASY, MATH

class Solution:
    def haveConflict(self, event1: List[str], event2: List[str]) -> bool:
        a1, a2 = event1
        b1, b2 = event2
        return not (b2 < a1 or b1 > a2)
