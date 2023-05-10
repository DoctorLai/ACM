# https://helloacm.com/teaching-kids-programming-maximum-number-of-vowels-in-a-substring-of-given-length-sliding-window-algorithm/
# https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
# MEDIUM, SLIDING WINDOW

class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vowels = {'a', 'e', 'i', 'o', 'u'}
        win = 0

        for i in range(k):
            win += s[i] in vowels

        ans = win

        for i in range(k, len(s)):
            win += s[i] in vowels
            win -= s[i - k] in vowels
            ans = max(ans, win)           
 
        return ans
