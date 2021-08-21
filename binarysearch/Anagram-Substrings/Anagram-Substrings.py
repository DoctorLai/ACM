# https://helloacm.com/teaching-kids-programming-anagram-substrings-via-sliding-window/
# https://binarysearch.com/problems/Anagram-Substrings
# MEDIUM, SLIDING WINDOW

class Solution:
    def solve(self, s0, s1):
        ans = 0
        R = n0 = len(s0)
        n1 = len(s1)
        c = Counter(s0)
        cur = Counter(s1[:n0])
        if c == cur:
            ans += 1
        while R < n1:
            cur[s1[R]] += 1
            cur[s1[R - n0]] -= 1
            if cur[s1[R - n0]] == 0:
                del cur[s1[R - n0]]
            if cur == c:
                ans += 1
            R += 1            
        return ans
