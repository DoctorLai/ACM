# https://helloacm.com/teaching-kids-programming-longest-common-prefix-algorithm/
# https://binarysearch.com/problems/Longest-Common-Prefix
# EASY, STRING

class Solution:
    def solve(self, words):
        i = 0
        min_len = min(len(w) for w in words)
        while i < min_len:
            col_chars = set({w[i] for w in words})
            if len(col_chars) != 1:
                break
            i += 1
        return words[0][:i]
