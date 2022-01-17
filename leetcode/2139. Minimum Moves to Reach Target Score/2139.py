# https://helloacm.com/teaching-kids-programming-minimum-moves-to-reach-target-score-with-constraints-greedy-algorithm/
# https://leetcode.com/problems/minimum-moves-to-reach-target-score/
# MEDIUM, GREEDY 

class Solution:
    def minMoves(self, target: int, maxDoubles: int) -> int:
        ans = 0
        while target > 1 and maxDoubles > 0:
            if target & 1 == 0:
                target >>= 1
                maxDoubles -= 1
            else:
                target -= 1
            ans += 1
        return ans + target - 1
