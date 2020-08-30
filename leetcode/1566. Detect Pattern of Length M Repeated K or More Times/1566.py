# https://helloacm.com/algorithms-to-detect-pattern-of-length-m-repeated-k-or-more-times-in-a-string/
# https://leetcode.com/problems/detect-pattern-of-length-m-repeated-k-or-more-times/
# EASY, BRUTEFORCE

class Solution:
    def containsPattern(self, arr: List[int], m: int, k: int) -> bool:
        L = len(arr)
        cnt = 0
        for i in range(L - m):
            if arr[i] == arr[i + m]:
                cnt += 1
            else:
                cnt = 0
            if cnt == m * (k - 1):
                return True
        return False
