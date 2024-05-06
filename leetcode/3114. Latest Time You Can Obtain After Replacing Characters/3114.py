# https://helloacm.com/teaching-kids-programming-latest-time-you-can-obtain-after-replacing-characters-decision-tree/
# https://leetcode.com/problems/latest-time-you-can-obtain-after-replacing-characters/
# EASY, DECISION TREE

class Solution:
    def findLatestTime(self, s: str) -> str:
        h, m = s.split(":")
        h = list(h)
        m = list(m)
        if h[0] == "?":
            if h[1] <= "1" or h[1] == "?":
                h[0] = "1"
            else:
                h[0] = "0"
        if h[1] == "?":
            if h[0] == "1":
                h[1] = "1"
            else:
                h[1] = "9"
        if m[0] == "?":
            m[0] = "5"
        if m[1] == "?":
            m[1] = "9"
        return "".join(h) + ":" + "".join(m)
