# https://helloacm.com/how-to-implement-quicksort-algorithm-in-python-the-pythonic-way/
# https://leetcode.com/problems/sort-an-array/

class Solution(object):
    def sortArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        if len(nums) < = 1:
            return nums
        
        pivot = random.choice(nums)
        lt = [v for v in nums if v < pivot]
        eq = [v for v in nums if v == pivot]
        gt = [v for v in nums if v > pivot]
        return self.sortArray(lt) + eq + self.sortArray(gt)
