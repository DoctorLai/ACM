# https://helloacm.com/teaching-kids-programming-two-pointer-algorithm-to-capitalize-the-title-string/
# https://leetcode.com/problems/capitalize-the-title/
# EASY, TWO POINTER

class Solution:
    def capitalizeTitle(self, title: str) -> str:
        i = j = 0
        s = list(title)
        n = len(s)        
        while i <= n:
            if i == n or s[i] == ' ':
                if i - j > 2:
                    s[j] = s[j].upper()
                j = i + 1
            else:
                s[i] = s[i].lower()
            i += 1
        return "".join(s)
