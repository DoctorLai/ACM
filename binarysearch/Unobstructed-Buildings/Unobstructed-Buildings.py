# https://helloacm.com/teaching-kids-programming-unobstructed-buildings-algorithm-via-monotonous-decreasing-stack/
# https://binarysearch.com/problems/Unobstructed-Buildings
# EASY, STACK

class Solution:
    def solve(self, heights):
        ans = []
        highest = -1
        for i in range(len(heights) - 1, -1, -1):
            if heights[i] > highest:
                ans.append(i)
                highest = heights[i]
        return ans[::-1]
