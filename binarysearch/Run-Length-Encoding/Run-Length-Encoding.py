# https://helloacm.com/teaching-kids-programming-run-length-encoding-compression-algorithm/
# https://binarysearch.com/problems/Run-Length-Encoding
# EASY, STRING

class Solution:
    def solve(self, s):
        return "".join(str(len(list(b))) + a for a, b in groupby(s))
