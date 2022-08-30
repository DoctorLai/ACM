# https://helloacm.com/teaching-kids-programming-reordered-power-of-two-rearranging-the-digits/
# https://leetcode.com/problems/reordered-power-of-2/
# MEDIUM, MATH, PERMUTATION

class Solution(object):
    def reorderedPowerOf2(self, N):     
        count = Counter(str(N))
        return any(count == collections.Counter(str(1 << b))
                   for b in range(31))
