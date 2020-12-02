# https://helloacm.com/unique-occurrences-algorithms-for-numbers/
# https://binarysearch.com/problems/Unique-Occurrences
# MEDIUM, HASH TABLE

class Solution:
    def solve(self, nums):
        data = Counter(nums)
        return len(data) == len(set(data.values()))
