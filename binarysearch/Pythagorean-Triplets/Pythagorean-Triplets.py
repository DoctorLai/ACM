# https://helloacm.com/teaching-kids-programming-finding-pythagorean-triplets-in-array-using-two-pointer-or-hash-set/
# https://binarysearch.com/problems/Pythagorean-Triplets
# EASY, MATH, TWO POINTER, SORT

class Solution:
    def solve(self, nums):
        nums.sort(reverse=True)
        for i in range(len(nums)):
            j, k = i + 1, len(nums) - 1
            while j < k:
                if nums[j]**2+nums[k]**2==nums[i]**2:
                    return True
                elif nums[j]**2+nums[k]**2>nums[i]**2:
                    j += 1
                else:
                    k -= 1
        return False
