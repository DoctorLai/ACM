# https://helloacm.com/algorithm-to-find-the-longest-anagram-subsequence/
# https://binarysearch.com/problems/Longest-Anagram-Subsequence
# MEDIUM, HASH TABLE

class Solution:
    def solve(self, a, b):
        aa = Counter(a)
        bb = Counter(b)
        ans = 0
        for i in aa:
            ans += min(aa[i], bb[i])
        return ans
