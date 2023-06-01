# https://helloacm.com/teaching-kids-programming-algorithms-to-find-two-smallest-numbers-buy-two-chocolates/
# https://leetcode.com/problems/buy-two-chocolates/
# EASY, SEARCH

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = inf
        for i in prices:
            if i <= min1:
                min2 = min1
                min1 = i
            elif i <= min2:
                min2 = i        
        if min1 + min2 > money:
            return money
        return money - min1 - min2
