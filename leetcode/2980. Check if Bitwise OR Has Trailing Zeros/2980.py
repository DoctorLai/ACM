# https://helloacm.com/teaching-kids-programming-check-if-bitwise-or-has-trailing-zeros-binary/
# https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/
# EASY, MATH

class Solution:
    def hasTrailingZeros(self, nums: List[int]) -> bool:
        even_count = 0
        for i in nums:
            if i & 1 == 0:
                even_count += 1
                if even_count >= 2:
                    return True
        return False
