# https://binarysearch.com/problems/Run-Length-Decoding
# https://helloacm.com/teaching-kids-programming-run-length-decoding-decompression-algorithm/
# EASY, STRING

class Solution:
    def solve(self, s):
        c = 0
        data = []
        for i in s:
            if i.isdigit():
                c = c * 10 + ord(i) - 48
            else:
                data.append(c)
                data.append(i)
                c = 0
        return "".join(data[i] * data[i + 1] for i in range(0, len(data), 2))
