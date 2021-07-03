# https://helloacm.com/teaching-kids-programming-max-number-of-points-on-a-line/
# https://binarysearch.com/problems/Points-on-a-Line
# HARD, MATH, HASH TABLE

class Solution:
    def solve(self, cords):
        n = len(cords)
        if n < 3:
            return n
        ans = 0
        for i in range(1, n):
            slopes = defaultdict(int)
            x1, y1 = cords[i]
            for j in range(i):
                x2, y2 = cords[j]
                s = (y2 - y1) / (x2 - x1) if x1 != x2 else math.inf
                slopes[s] += 1
            ans = max(ans, max(slopes.values()))
        return ans + 1
