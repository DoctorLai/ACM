# https://helloacm.com/teaching-kids-programming-k-numbers-greater-than-or-equal-to-k-using-binary-search/
# https://binarysearch.com/problems/K-Numbers-Greater-Than-or-Equal-to-K
# EASY, BINARY SEARCH

class Solution:
    def solve(self, nums):
        nums.sort()
        left, right = 1, max(nums)
        def f(k):
            return len(nums) - bisect.bisect_left(nums, k)
        while left <= right:
            mid = (left + right) // 2
            cur = f(mid)
            if cur == mid:
                return mid
            if cur < mid:
                right = mid - 1
            else:
                left = mid + 1
        return -1
