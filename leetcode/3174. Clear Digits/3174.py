# https://helloacm.com/teaching-kids-programming-using-stack-to-remove-digits-and-characters-on-the-left/
# https://leetcode.com/problems/clear-digits/
# EASY, STACK

class Solution:
    def clearDigits(self, s: str) -> str:
        a = []
        for i in s:
            if i.isdigit():
                if a:
                    a.pop()
            else:
                a.append(i)
        return "".join(a)
