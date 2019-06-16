# https://helloacm.com/coding-exercise-sum-of-digits-in-the-minimum-number/
# https://leetcode.com/problems/sum-of-digits-in-the-minimum-number/

class Solution:
    def sumOfDigits(self, A: List[int]) -> int:
        x = min(A)
        S = 0
        while x > 0:
            S += (x % 10)
            x //= 10  # make sure the integer division
        #return 0 if ((S % 2) == 1) else 1
        return 1 - S % 2
