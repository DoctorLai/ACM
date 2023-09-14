# https://helloacm.com/teaching-kids-programming-number-of-even-and-odd-bits/
# https://leetcode.com/problems/number-of-even-and-odd-bits/
# EASY, MATH, BINARY

class Solution:
    def evenOddBit(self, n: int) -> List[int]:

        ans = [0, 0]        
        i = 0
        while n:
            ans[i] += n & 1
            n >>= 1
            i = 1 - i
        return ans 
