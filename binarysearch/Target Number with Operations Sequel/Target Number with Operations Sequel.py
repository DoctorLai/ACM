# https://helloacm.com/teaching-kids-programming-minimum-number-of-operations-to-target-number/
# https://binarysearch.com/problems/Target-Number-with-Operations-Sequel
# MEDIUM, MATH

class Solution:
    def solve(self, start, end):
        ans = 0
        while end > start:
            if end & 1:
                end += 1
            else:
                end //= 2
            ans += 1
        return ans + start - end;
