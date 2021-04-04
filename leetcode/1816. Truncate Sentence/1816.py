# https://helloacm.com/algorithm-to-truncate-sentence/
# https://leetcode.com/problems/truncate-sentence/
# EASY, STRING

class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        a = s.split(' ')
        return ' '.join(a[:k])
