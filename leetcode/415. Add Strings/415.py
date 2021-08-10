# https://helloacm.com/teaching-kids-programming-add-two-big-integers-in-strings/
# https://leetcode.com/problems/add-strings/
# EASY, MATH

class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        n1, n2 = len(num1) - 1, len(num2) - 1
        ans = deque()
        c = 0
        while n1>=0 or n2>=0 or c>0:
            x = c
            if n1>=0:
                x += int(num1[n1])
                n1 -= 1
            if n2>=0:
                x += int(num2[n2])
                n2 -= 1
            ans.appendleft(str(x%10))
            c = x // 10
        return "".join(ans)
