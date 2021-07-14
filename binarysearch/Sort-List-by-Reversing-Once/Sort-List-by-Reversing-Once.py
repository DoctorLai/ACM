# https://helloacm.com/teaching-kids-programming-sort-list-by-reversing-once/
# https://binarysearch.com/problems/Sort-List-by-Reversing-Once
# MEDIUM, SORT, TWO POINTER

class Solution:
    def solve(self, nums):
        arr = sorted(nums)
        i, j = 0, len(arr) - 1
        while i < j and nums[i] == arr[i]:
            i += 1
        while i < j and nums[j] == arr[j]:
            j -= 1
        return arr[i:j+1]==list(reversed(nums[i:j+1]))
      
