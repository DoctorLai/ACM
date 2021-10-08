# https://helloacm.com/teaching-kids-programming-first-number-equal-or-larger-than-target-using-next-function/
# https://binarysearch.com/problems/First-Fit-Room
# EASY, ARRAY

class Solution:
    def solve(self, rooms, target):
        return next((x for x in rooms if x >= target), -1)
