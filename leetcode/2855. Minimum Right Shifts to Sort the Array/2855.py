# https://helloacm.com/teaching-kids-programming-minimum-right-shifts-to-sort-the-array/
# https://leetcode.com/problems/minimum-right-shifts-to-sort-the-array/
# EASY, ARRAY

class Solution:    
    def minimumRightShifts(self, nums: List[int]) -> int:
        n = len(nums)
        a = min(nums)
        i = nums.index(a)
        new_arr = nums[i:] + nums[:i]
        if any(new_arr[v] <= new_arr[v - 1] for v in range(1, n)):
            return -1
        return (n - i) % n
