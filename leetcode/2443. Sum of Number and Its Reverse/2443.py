# https://helloacm.com/teaching-kids-programming-sum-of-number-and-its-reverse-bruteforce-algorithm/
# https://leetcode.com/problems/sum-of-number-and-its-reverse/
# MEDIUM, BRUTEFORCE

class Solution:
    def sumOfNumberAndReverse(self, num: int) -> bool:
        def rev(i):
            ans = 0
            while i:
                ans = ans * 10 + i % 10
                i //= 10
            return ans
        for i in range(num//2, num + 1):
            if i + rev(i) == num:
                return True
        return False
