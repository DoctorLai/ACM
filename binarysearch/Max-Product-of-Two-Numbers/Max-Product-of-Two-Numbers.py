# https://helloacm.com/teaching-kids-programming-max-product-of-two-numbers/
# https://binarysearch.com/problems/Max-Product-of-Two-Numbers
# EASY, MATH

class Solution:
    def solve(self, nums):
        big1 = big2 = -math.inf
        small1 = small2 = math.inf
        for i in nums:
            if i >= big1:
                big2 = big1
                big1 = i
            elif i >= big2:
                big2 = i
            if i <= small1:
                small2 = small1
                small1 = i
            elif i <= small2:
                small2 = i
        return max(big1*big2, small1*small2)
