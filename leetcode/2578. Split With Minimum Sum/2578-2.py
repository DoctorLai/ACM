# https://helloacm.com/teaching-kids-programming-split-with-minimum-sum-bucket-sorting-algorithm/
# https://leetcode.com/problems/split-with-minimum-sum/
# EASY, MATH, SORTING, GREEDY

class Solution:
    def splitNum(self, num: int) -> int:
        d = [0] * 10
        for i in str(num):
            d[int(i)] += 1

        s1 = 0
        s2 = 0
        i = 0
        while i < 10:
            if d[i] == 0:
                i += 1
                continue
            s1 = s1 * 10 + i
            d[i] -= 1
            while i < 10 and d[i] == 0:
                i += 1
            if i == 10:
                break
            s2 = s2 * 10 + i
            d[i] -= 1

        return s1 + s2
