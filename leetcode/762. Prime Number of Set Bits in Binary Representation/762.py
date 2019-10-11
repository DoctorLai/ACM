# https://helloacm.com/how-to-count-the-prime-number-of-set-bits-in-binary-representation/
# https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/

class Solution:
    def countPrimeSetBits(self, L: int, R: int) -> int:
        ans = 0
        primes = [2, 3, 5, 7, 11, 13, 17, 19]
        for i in range(L, R + 1):
            bc = bin(i).count('1')
            if bc in primes:
                ans += 1
        return ans
