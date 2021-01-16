# https://binarysearch.com/problems/Unique-Ab-Strings
# https://helloacm.com/count-the-unique-ab-strings-by-permutation/
# EASY, MATH

class Solution:
    def solve(self, s):
        a = sum([1 for x in s if x == 'a'])
        return 2**a
