# https://helloacm.com/teaching-kids-programming-remove-consecutive-duplicates/
# https://binarysearch.com/problems/Consecutive-Duplicates

class Solution:
    def solve(self, s):
        return "".join([x for x, _ in itertools.groupby(s)])
