# https://helloacm.com/teaching-kids-programming-line-sweeping-algorithm-to-compute-the-most-frequent-number-in-intervals/
# https://binarysearch.com/problems/Most-Frequent-Number-in-Intervals
# EASY, LINE SWEEPING

class Solution:
    def solve(self, intervals):
        data = defaultdict(int)
        for i in intervals:
            data[i[0]] += 1
            data[i[1] + 1] -= 1
        c = most = 0
        ans = None
        for i in sorted(data.keys()):
            c += data[i]
            if c > most:
                most = c
                ans = i
        return ans        
