# https://helloacm.com/using-bitmasking-algorithm-to-compute-the-combinations-of-an-array/
# https://leetcode.com/problems/combinations/
# MEDIUM, BITMASK

class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        ans = []
        for b in (range(1 << n)):
            if bin(b).count('1') == k:
                cur = []
                for i in range(n):
                    if (b & (1 << (i))) > 0:
                        cur.append(i + 1)
                ans.append(cur)
        return ans
