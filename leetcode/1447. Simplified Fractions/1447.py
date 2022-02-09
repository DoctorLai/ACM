# https://helloacm.com/teaching-kids-programming-math-simplified-fractions-where-denominator-is-less-than-or-equal-to-n/
# https://leetcode.com/problems/simplified-fractions/
# MEDIUM, MATH, GCD

class Solution:
    def simplifiedFractions(self, n: int) -> List[str]:
        data = []
        for i in range(1, n + 1):
            for j in range(1, i):
                if gcd(i, j) == 1:
                    data.append(str(j) + "/" + str(i))
        return data
