# https://helloacm.com/teaching-kids-programming-check-if-a-string-is-prefix-suffix-in-python-two-pointer-algorithm/
# https://leetcode.com/problems/counting-words-with-a-given-prefix/
# EASY, STRING

class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        return sum(w.startswith(pref) for w in words)
