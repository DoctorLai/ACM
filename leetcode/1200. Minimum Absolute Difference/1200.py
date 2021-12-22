# https://helloacm.com/teaching-kids-programming-compute-minimum-absolute-difference-of-two-numbers-in-an-array/
# https://leetcode.com/problems/minimum-absolute-difference/
# EASY, SORTING

class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        n = len(arr)
        arr.sort()
        minDiff = math.inf
        ans = []
        for i in range(1, n):
            curDiff = arr[i] - arr[i - 1]
            if curDiff < minDiff:
                minDiff = curDiff
                ans = [[arr[i - 1], arr[i]]]
            elif curDiff == minDiff:
                ans.append([arr[i - 1], arr[i]])
        return ans
