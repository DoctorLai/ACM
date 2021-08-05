# https://helloacm.com/teaching-kids-programming-three-divisors/
# https://leetcode.com/problems/three-divisors/
# EASY, MATH

class Solution:
    def isThree(self, n: int) -> bool:
        i = c = 2
        while i * i <= n:
            if n % i == 0:
                c += 1
                if i * i != n:
                    c += 1
            i += 1
            if c > 3:
                return False
        return c == 3
