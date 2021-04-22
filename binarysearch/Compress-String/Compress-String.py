# https://helloacm.com/teaching-kids-programming-using-groupby-algorithm-to-compress-string/
# https://binarysearch.com/problems/Compress-String
# EASY, STRING

class Solution:
    def solve(self, s):
        return "".join([x for x,y in groupby(s)])
