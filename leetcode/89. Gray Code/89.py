# https://helloacm.com/teaching-kids-programming-gray-code-by-recursive-mirror-algorithm/
# https://leetcode.com/problems/gray-code/
# MEDIUM, MATH, RECURSION

class Solution:
    def grayCode(self, n: int) -> List[int]:
        
        @cache
        def f(n):
            if n == 1:
                return [0, 1]
            prev = f(n - 1)
            k = 1 << (n - 1)
            return prev + [k + x for x in prev[::-1]]
        
        return f(n)
