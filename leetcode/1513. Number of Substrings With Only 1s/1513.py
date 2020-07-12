# https://helloacm.com/algorithm-to-count-the-number-of-substrings-with-only-1s/
# https://leetcode.com/problems/number-of-substrings-with-only-1s/

class Solution:
    def numSub(self, s: str) -> int:
        arr = s.split('0')
        res = 0
        for i in arr:
            res += (len(i) + 1) * len(i) // 2
        return int(res % (1e9 + 7))
