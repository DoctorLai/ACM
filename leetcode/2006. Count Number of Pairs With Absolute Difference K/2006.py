# https://helloacm.com/teaching-kids-programming-count-number-of-pairs-with-absolute-difference-k/
# https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
# EASY, HASH MAP

class Solution:
    def countKDifference(self, nums: List[int], k: int) -> int:
        c = Counter(nums)
        ans = 0
        for i in c:
            ans += c[i] * c[i + k]
        return ans
