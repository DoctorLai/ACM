# https://helloacm.com/teaching-kids-programming-smallest-value-of-the-rearranged-number/
# https://leetcode.com/problems/smallest-value-of-the-rearranged-number/
# MEDIUM, SORTING

class Solution:
    def smallestNumber(self, num: int) -> int:
        if num == 0:
            return 0        
        if num < 0:
            s = list(str(-num))
            return int("-" + "".join(sorted(s, reverse=True)))
        else:
            s = list(str(num))
            s.sort()
            i = next(x for x, c in enumerate(s) if c != '0')
            return int(s[i] + "".join(s[:i] + s[i + 1:])) 
