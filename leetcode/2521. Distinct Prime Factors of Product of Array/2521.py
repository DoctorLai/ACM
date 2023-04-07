# https://helloacm.com/teaching-kids-programming-distinct-prime-factors-of-product-of-array/
# https://leetcode.com/problems/distinct-prime-factors-of-product-of-array/
# MEDIUM, MATH

class Solution:
    def distinctPrimeFactors(self, nums: List[int]) -> int:
        a = set()
        for x in nums:
            j = 2
            while x != 1:
                while x % j == 0:
                    x //= j
                    a.add(j)
                j += 1
        return len(a)
