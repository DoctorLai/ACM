# https://helloacm.com/teaching-kids-programming-algorithms-to-separate-the-digits-of-a-number-array/
# https://leetcode.com/problems/separate-the-digits-in-an-array/
# EASY, MATH

class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:                                                  
        ans = []
        for i in nums:
            cur = []
            while i:
                cur.append(i % 10)
                i //= 10
            ans.extend(cur[::-1])
        return ans
