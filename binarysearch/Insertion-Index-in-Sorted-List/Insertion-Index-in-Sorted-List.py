# https://helloacm.com/teaching-kids-programming-insertion-index-in-sorted-list-bisect_right/
# https://binarysearch.com/problems/Insertion-Index-in-Sorted-List/submissions/4910314

class Solution:
    def solve(self, nums, target):
        return bisect_right(nums, target)
