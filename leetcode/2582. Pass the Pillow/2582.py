# https://helloacm.com/teaching-kids-programming-passing-item-from-one-end-to-another-who-has-it-after-n-seconds/
# https://leetcode.com/problems/pass-the-pillow/
# EASY, MATH

class Solution:
    def passThePillow(self, n: int, t: int) -> int:
        T = (n - 1) * 2
        t %= T
        t += 1
        return min(t, n * 2 - t)
