# https://helloacm.com/teaching-kids-programming-least-number-of-unique-integers-after-k-removals/
# https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/
# MEDIUM, HASH MAP

class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        c = Counter(arr)
        ans = len(c)
        for _, v in c.most_common()[::-1]:
            if k >= v:
                k -= v
                ans -= 1
            else:
                break
        return ans
