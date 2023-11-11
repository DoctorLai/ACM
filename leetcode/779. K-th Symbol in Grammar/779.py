# https://helloacm.com/teaching-kids-programming-recursive-algorithms-to-compute-the-k-th-symbol-in-grammar/
# https://leetcode.com/problems/k-th-symbol-in-grammar/
# MEDIUM, RECURSION

class Solution:
    @cache
    def kthGrammar(self, n, k, acc=0):
        if n == 1 or k == 1:
            return acc
        mid = 1 << (n - 2)
        if k <= mid:
            return self.kthGrammar(n - 1, k, acc)
        return self.kthGrammar(n - 1, k - mid, 1 - acc)
