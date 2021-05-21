# https://helloacm.com/teaching-kids-programming-two-pointer-algorithm-to-rescue-people-in-rocketship/
# https://binarysearch.com/problems/Rocketship-Rescue
# MEDIUM, TWO POINTER, GREEDY

class Solution:
    def solve(self, weights, limit):
        weights.sort()
        ans = 0
        i, j = 0, len(weights) - 1
        while i <= j:
            cur = weights[j]
            j -= 1
            if cur + weights[i] <= limit:
                i += 1
            ans += 1
        return ans
