# https://helloacm.com/teaching-kids-programming-find-maximum-number-of-string-pairs-brute-force-algorithm-hash-set/
# https://leetcode.com/problems/find-maximum-number-of-string-pairs/
# EASY, STRING, HASH MAP

class Solution:
    def maximumNumberOfStringPairs(self, words: List[str]) -> int:
        ## using hash set
        seen = set()
        ans = 0
        for i in words:
            if i[::-1] in seen:
                ans += 1
                seen.remove(i[::-1])
            else:
                seen.add(i)
        return ans
