# https://helloacm.com/teaching-kids-programming-minimum-number-of-chairs-in-the-room-prefix-sum/
# https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/
# EASY, PREFIX SUM

class Solution:
    def minimumChairs(self, s: str) -> int:
        return max(accumulate(1 if c == "E" else -1 for c in s))
