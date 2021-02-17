# https://helloacm.com/string-interleaving-algorithm/
# https://binarysearch.com/problems/Interleaved-String
# EASY, STRING

class Solution:
    def solve(self, s0, s1):
        def f(a, b):
            if a is None:
                return b
            if b is None:
                return a
            return a + b
        return "".join(f(x[0], x[1]) for x in zip_longest(list(s0), list(s1)))
