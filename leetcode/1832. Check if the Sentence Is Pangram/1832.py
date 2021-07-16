# https://helloacm.com/teaching-kids-programming-check-if-the-sentence-is-pangram/
# https://leetcode.com/problems/check-if-the-sentence-is-pangram/
# EASY, STRING, HASH MAP

class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        c = Counter(sentence)
        for i in range(26):
            if c[chr(i + 97)] == 0:
                return False
        return True
