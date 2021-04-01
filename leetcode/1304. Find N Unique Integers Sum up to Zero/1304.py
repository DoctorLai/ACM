# https://helloacm.com/teaching-kids-programming-find-n-unique-integers-sum-up-to-zero/
# https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
# EASY, MATH

class Solution:
    def sumZero(self, n: int) -> List[int]:
        i = 1
        ans = []
        s = 0
        while n > 1:
            ans.append(i)
            s += i
            i += 1
            n -= 1
        ans.append(-s)
        return ans
