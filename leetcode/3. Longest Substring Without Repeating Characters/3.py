# https://helloacm.com/teaching-kids-programming-longest-substring-without-repeating-characters-two-pointer-sliding-window-algorithm/
# https://leetcode.com/problems/longest-substring-without-repeating-characters/
# MEDIUM, TWO POINTER, SLIDING WINDOW

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:      
        d = {}
        win = set()
        ans = 0
        r = 0
        n = len(s)
        l = 0
        while r < n:
            x = s[r]
            i = d.get(x, -1) + 1
            while l < i:
                win.remove(s[l])
                l += 1
            d[x] = r
            win.add(x)
            ans = max(ans, len(win))
            r += 1
        return ans
