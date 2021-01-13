# https://helloacm.com/greedy-algorithm-to-remove-half-of-the-list/
# https://binarysearch.com/problems/Remove-Half-of-the-List
# MEDIUM, GREEDY

class Solution:
    def solve(self, nums):
        d = Counter(nums)
        l = len(nums)
        x = sorted(d.values(), reverse=True)
        ans = 0
        z = 0
        for v in x:
            ans += 1
            z += v
            if z * 2 >= l:
                break
        return ans
