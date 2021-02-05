// https://helloacm.com/greedy-algorithm-to-find-maximum-number-after-one-swap/
// https://binarysearch.com/problems/Maximum-Number-After-One-Swap
// MEDIUM, GREEDY

class Solution:
    def solve(self, n):
        s = list(str(n))
        for i in range(len(s)):
            x = i
            for j in range(i + 1, len(s)):
                if s[j] >= s[x]:
                    x = j
            if s[x] != s[i]:
                s[i], s[x] = s[x], s[i]
                return int(''.join(s))
        return n
