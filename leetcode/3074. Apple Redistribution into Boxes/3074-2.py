# https://helloacm.com/teaching-kids-programming-redistribute-items-to-boxes-knapsack-problem-binary-search-algorithm/
# https://leetcode.com/problems/apple-redistribution-into-boxes/
# EASY, GREEDY, BINARY SEARCH

class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        x = sum(apple)
        if x > sum(capacity):
            return -1        
        capacity.sort(reverse=True)
        arr = list(accumulate(capacity))
        return bisect_left(arr, x) + 1
