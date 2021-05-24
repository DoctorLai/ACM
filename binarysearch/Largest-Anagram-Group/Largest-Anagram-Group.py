# https://helloacm.com/teaching-kids-programming-largest-anagram-group/
# https://binarysearch.com/problems/Largest-Anagram-Group
# MEDIUM, HASH TABLE

class Solution:
    def solve(self, words):
        return max(Counter(tuple(sorted(word)) for word in words).values())
