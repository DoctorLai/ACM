# https://helloacm.com/teaching-kids-programming-using-hash-set-or-hash-table-to-count-next-element/
# https://binarysearch.com/problems/Count-Next-Element
# EASY, HASH TABLE

class Solution:
    def solve(self, nums):
        cn = Counter(nums)
        ans = 0
        for i in cn.keys():
            if i + 1 in cn:
                ans += cn[i]
        return ans
