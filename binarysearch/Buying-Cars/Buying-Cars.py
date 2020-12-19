# https://helloacm.com/teaching-kids-programming-greedy-algorithm-of-buying-cars/
# https://binarysearch.com/problems/Buying-Cars
# EASY, GREEDY

class Solution:
    def solve(self, prices, k):
        prices.sort()
        ans = 0
        for p in prices:
            if k >= p:
                ans += 1
                k -= p
            else:
                break
        return ans
