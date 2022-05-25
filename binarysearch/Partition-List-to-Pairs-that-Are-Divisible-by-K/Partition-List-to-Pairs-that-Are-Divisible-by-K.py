# https://helloacm.com/teaching-kids-programming-partition-list-to-pairs-that-are-divisible-by-k-hash-map/
# https://binarysearch.com/problems/Partition-List-to-Pairs-that-Are-Divisible-by-K
# MEDIUM, MATH, HASH TABLE

class Solution:
    def solve(self, nums, k):
        f = defaultdict(int)
        c = 0
        for i in nums:
            a = i % k
            b = (k - a) % k
            if f[a] > 0:
                f[a] -= 1
                c -= 1
            else:
                f[b] += 1
                c += 1
        return c == 0
