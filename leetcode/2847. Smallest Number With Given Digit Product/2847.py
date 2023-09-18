# https://helloacm.com/teaching-kids-programming-smallest-number-with-given-digit-product-greedy-factorization-algorithm/
# https://leetcode.com/problems/smallest-number-with-given-digit-product/
# MEDIUM, MATH, GREEDY

class Solution:
    def smallestNumber(self, n: int) -> str:
        if n == 1:
            return str(n)

        arr = []
        for i in range(9, 1, -1):
            while n % i == 0:
                arr.append(i)
                n //= i

        if not arr or n != 1:
            return "-1"
        return "".join(map(str, reversed(arr)))
