# https://helloacm.com/teaching-kids-programming-split-with-minimum-sum-sort-the-digits-greedy/
# https://leetcode.com/problems/split-with-minimum-sum/
# EASY, MATH, HEAP, PRIORITY QUEUE

class Solution:
    def splitNum(self, num: int) -> int:
        digits = list(str(num))
        s1 = 0
        s2 = 0
        heapify(digits)
        while digits:
            a = heappop(digits)
            s1 = s1 * 10 + int(a)
            if digits:
                b = heappop(digits)
                s2 = s2 * 10 + int(b)
        return s1 + s2
