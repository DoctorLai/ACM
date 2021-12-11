# https://helloacm.com/teaching-kids-programming-longest-substring-with-2-distinct-characters-by-sliding-window-algorithm/
# https://binarysearch.com/problems/Longest-Substring-with-2-Distinct-Characters
# MEDIUM, SLIDING WINDOW

class Solution:
    def solve(self, s):
        l, r, n = 0, 0, len(s)
        ans = 0
        win = defaultdict(int)
        while r < n:
            win[s[r]] += 1
            while l <= r and len(win.keys()) > 2:
                win[s[l]] -= 1
                if win[s[l]] == 0:
                    del win[s[l]]
                l += 1
            ans = max(ans, r - l + 1)
            r += 1
        return ans
