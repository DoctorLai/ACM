# https://helloacm.com/teaching-kids-programming-last-moment-before-all-ants-fall-out-of-a-plank/
# https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/
# MEDIUM, MATH

class Solution:
    def getLastMoment(self, n: int, left: List[int], right: List[int]) -> int:
        ans = 0
        for i in left:
            ans = max(ans, i)
        for i in right:
            ans = max(ans, n - i)
        return ans
