# https://helloacm.com/divide-the-array-into-group-of-integers-with-size-using-gcd-algorithm/
# https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/
# EASY, GCD, MATH

class Solution:
    def hasGroupsSizeX(self, deck: List[int]) -> bool:
        d = Counter(deck)
        return reduce(gcd, d.values()) > 1
