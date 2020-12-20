# https://helloacm.com/algorithm-to-reformat-the-phone-number/
# https://leetcode.com/problems/reformat-phone-number/
# EASY, STRING

class Solution:
    def reformatNumber(self, number: str) -> str:
        s = number.replace(' ', '').replace('-', '')
        i, j = 0, len(s)
        ans = ""
        while i + 4 < j:
            ans += s[i: i + 3] + "-"
            i += 3
        if i + 4 == j:
            ans += s[i: i + 2] + "-" + s[i + 2:]
        else:
            ans += s[i:]
        return ans
