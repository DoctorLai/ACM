# https://helloacm.com/teaching-kids-programming-algorithms-to-check-a-circular-sentence/
# https://leetcode.com/problems/circular-sentence/
# EASY, STRING

class Solution:
    def isCircularSentence(self, arr: str) -> bool:
        if not arr:
            return True
        arr = arr.split()
        return all(arr[i][-1] == arr[(i + 1) % len(arr)][0] for i in range(0, len(arr)))
