# https://helloacm.com/reverse-a-sentence-sentence-reversal-algorithm/
# https://binarysearch.com/problems/Sentence-Reversal
# MEDIUM, STRING

class Solution:
    def solve(self, sentence):
        return list(" ".join("".join(sentence).split()[::-1]))
