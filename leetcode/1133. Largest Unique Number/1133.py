# https://helloacm.com/python-method-to-find-the-largest-unique-number-in-an-array/
# https://leetcode.com/problems/largest-unique-number/

class Solution:
    def largestUniqueNumber(self, A: List[int]) -> int:
        freq = collections.Counter(A)
        x = list(filter(lambda x: freq[x] == 1, A))
        return max(x) if len(x) > 0 else -1
