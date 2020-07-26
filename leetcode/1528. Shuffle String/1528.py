# https://helloacm.com/algorithm-to-shuffle-string-in-python3-according-to-index/
# https://leetcode.com/problems/shuffle-string/

class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        res = list(s)
        for i in enumerate(indices):
            res[i[1]] = s[i[0]]
        return ''.join(res)
