// https://helloacm.com/robinhood-stock-market-return-of-investment-calculation-algorithm/
// https://binarysearch.com/problems/Robinhood
// EASY, MATH

class Solution:
    def solve(self, n, e, o, t):
        res = 0
        while n < t:
            if res & 1:
                n = n * (100 + o) / 100
            else:
                n = n * (100 + e) / 100
            res += 1
        return res
