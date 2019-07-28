# https://helloacm.com/how-to-determine-the-armstrong-number/
# https://leetcode.com/problems/armstrong-number/

class Solution:
    def isArmstrong(self, N: int) -> bool:
        s = 0
        n = N
        l = len(str(N))
        while n > 0:
            t = n % 10
            n //= 10
            s = s + (t ** l)
        return s == N
