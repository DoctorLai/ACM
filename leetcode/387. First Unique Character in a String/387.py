# https://helloacm.com/teaching-kids-programming-first-unique-character-in-a-string/
# https://leetcode.com/problems/first-unique-character-in-a-string/
# EASY, HASH MAP

class Solution:
    def firstUniqChar(self, s: str) -> int:
        count = collections.Counter(s)
        for idx, ch in enumerate(s):
            if count[ch] == 1:
                return idx     
        return -1
