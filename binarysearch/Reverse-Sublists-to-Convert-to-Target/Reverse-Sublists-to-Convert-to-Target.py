# https://helloacm.com/teaching-kids-programming-reverse-sublists-to-convert-to-target/
# https://binarysearch.com/problems/Reverse-Sublists-to-Convert-to-Target
# EASY, HASH TABLE

class Solution:
    def solve(self, nums, target):
        if len(nums) != len(target):
            return False
        return Counter(nums) == Counter(target)
