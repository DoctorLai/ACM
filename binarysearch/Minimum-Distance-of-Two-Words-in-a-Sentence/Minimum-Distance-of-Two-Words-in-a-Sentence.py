# https://binarysearch.com/problems/Minimum-Distance-of-Two-Words-in-a-Sentence
# https://helloacm.com/teaching-kids-programming-minimum-distance-of-two-words-in-a-sentence-string/
# EASY, STRING

class Solution:
    def solve(self, s, w1, w2):
        arr = s.split()
        n = len(arr)
        last = None
        ans = math.inf
        for i, cur in enumerate(arr):
            if cur in (w1, w2):
                if last != None and arr[last] != cur:
                    ans = min(ans, i - last - 1)
                last = i
        return ans if ans != math.inf else -1
