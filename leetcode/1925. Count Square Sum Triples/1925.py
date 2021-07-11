# https://helloacm.com/teaching-kids-programming-count-square-sum-pythagorean-triples/
# https://leetcode.com/problems/count-square-sum-triples/
# EASY, MATH

class Solution:
    def countTriples(self, n: int) -> int:
        ans = 0
        arr = [False] * (n * n + 1)
        for i in range(n + 1):
            arr[i * i] = True
        for i in range(1, n + 1):
            j = i+1
            while j * j + i * i <= n * n:
                if arr[i * i + j * j]:
                    ans += 2
                j += 1
        return ans
