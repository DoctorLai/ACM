# https://helloacm.com/teaching-kids-programming-number-of-valid-clock-times/
# https://leetcode.com/problems/number-of-valid-clock-times/
# EASY, MATH

class Solution:
    def countTime(self, time: str) -> int:
        ans = 1
        if time[4] == '?':
            ans *= 10
        if time[3] == '?':
            ans *= 6
        if time[0] == '?' and time[1] == '?':
            ans *= 24
        else:
            if time[0] == '?':
                if time[1] <= '3':
                    ans *= 3
                else:
                    ans *= 2
            if time[1] == '?':
                if time[0] <= '1':
                    ans *= 10
                else:
                    ans *= 4
        return ans
