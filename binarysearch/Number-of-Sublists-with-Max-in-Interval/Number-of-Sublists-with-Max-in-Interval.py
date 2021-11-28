# https://helloacm.com/teaching-kids-programming-number-of-sublists-with-max-in-interval/
# https://binarysearch.com/problems/Number-of-Sublists-with-Max-in-Interval
# MEDIUM, MATH

class Solution:
    def solve(self, A, L, R):
        def f(upperBound):
            ans = cur = 0
            for x in A :
                if x <= upperBound:
                    cur += 1
                else:
                    cur = 0
                ans += cur
            return ans
        return f(R) - f(L - 1)
