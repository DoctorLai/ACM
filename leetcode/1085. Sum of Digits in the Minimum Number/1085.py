# https://helloacm.com/coding-exercise-sum-of-digits-in-the-minimum-number/
# https://leetcode.com/problems/sum-of-digits-in-the-minimum-number/

class Solution:
    def sumOfDigits(self, A: List[int]) -> int:
        return 1 - sum(int(c) for c in str(min(A))) % 2
