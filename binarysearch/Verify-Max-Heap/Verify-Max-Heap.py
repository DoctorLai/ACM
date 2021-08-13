# https://helloacm.com/teaching-kids-programming-how-to-verify-a-max-heap/
# https://binarysearch.com/problems/Verify-Max-Heap
# EASY, HEAP

class Solution:
    def solve(self, nums):
        n = len(nums)
        for i in range(n//2):
            if 2*i+1<n and nums[i] < nums[2 * i + 1]:
                return False
            if 2*i+2<n and nums[i] < nums[2 * i + 2]:
                return False
        return True
