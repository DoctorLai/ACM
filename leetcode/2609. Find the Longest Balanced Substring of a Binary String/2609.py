# https://leetcode.com/problems/find-the-longest-balanced-substring-of-a-binary-string/
# https://helloacm.com/teaching-kids-programming-find-the-longest-balanced-substring-of-a-binary-string/
# EASY, STRING, MATH

class Solution:
    def findTheLongestBalancedSubstring(self, s: str) -> int:
        ans = 0
        ones = 0
        zeros = 0
        for j, i in enumerate(s):
            if i == '1':
                ones += 1
                if zeros >= ones:
                    ans = max(ans, ones * 2)
            else:
                if j == 0 or s[j - 1] == '0':
                    zeros += 1
                else:
                    zeros = 1
                ones = 0
        return ans
