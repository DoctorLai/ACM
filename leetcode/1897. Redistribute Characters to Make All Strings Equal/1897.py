# https://helloacm.com/teaching-kids-programming-redistribute-characters-to-make-all-strings-equal/
# https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/
# EASY, STRING, HASH MAP

class Solution:
    def makeEqual(self, words: List[str]) -> bool:
        return all([x % len(words) == 0 for x in Counter(''.join(words)).values()])
