# https://helloacm.com/teaching-kids-programming-dynamic-programming-algorithms-to-count-the-number-of-unique-binary-search-trees-catalan-numbers/
# https://leetcode.com/problems/unique-binary-search-trees/
# MEDIUM, MATH, DP

class Solution:
    def numTrees(self, n):
        @cache
        def G(n):
            if n == 0:
                return 1
            return sum(G(i)*G(n-i-1) for i in range(n))
        return G(n)
