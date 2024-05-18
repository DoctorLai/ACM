# https://helloacm.com/teaching-kids-programming-greedy-algorithm-to-redistribute-items-to-boxes-knapsack-problem/
# https://leetcode.com/problems/apple-redistribution-into-boxes/
# EASY, GREEDY

class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        capacity.sort(reverse=True)
        apple = sum(apple)
        if apple > sum(capacity):
            return -1
        i = 0
        n = len(capacity)
        while apple:
            if apple > capacity[i]:
                apple -= capacity[i]
                i += 1
            else:
                break
        return i + 1
