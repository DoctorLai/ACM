# https://helloacm.com/teaching-kids-programming-remove-digit-from-number-to-maximize-result/
# https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/
# EASY, BRUTEFORCE

class Solution:
    def removeDigit(self, number: str, digit: str) -> str:        
        return max((number[:i] + number[i+1:] for i,j in enumerate(number) if j == digit), default = number)
