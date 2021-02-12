# https://helloacm.com/teaching-kids-programming-algorithm-to-reverse-words-in-a-sentence/
# https://binarysearch.com/problems/Reverse-Words
# EASY, STRING

class Solution:
    def solve(self, sentence):
        return ' '.join(sentence.split(' ')[::-1])
