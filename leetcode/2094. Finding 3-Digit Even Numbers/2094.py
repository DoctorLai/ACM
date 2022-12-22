# https://helloacm.com/teaching-kids-programming-finding-3-digit-even-numbers-permutations-brute-force/
# https://leetcode.com/problems/finding-3-digit-even-numbers/
# EASY, MATH

class Solution:
    def findEvenNumbers(self, digits: List[int]) -> List[int]:
        x = Counter(digits)
        ans = []
        for i in range(100, 1000, 2):            
            if Counter((i // 100, (i // 10) % 10, i % 10)) <= x:
                ans.append(i)
        return ans
