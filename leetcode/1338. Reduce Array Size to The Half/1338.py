# https://helloacm.com/teaching-kids-programming-reduce-array-size-to-the-half-via-counting-hash-table/
# https://leetcode.com/problems/reduce-array-size-to-the-half/
# MEDIUM, HASH TABLE

class Solution:
    def minSetSize(self, arr: List[int]) -> int:        
        c = Counter(arr)
        a = (x for y, x in c.most_common())
        ans = 0
        t = 0
        for i in a:
            ans += 1
            t += i
            if t * 2 >= len(arr):
                return ans
