# https://helloacm.com/teaching-kids-programming-divide-and-conquer-algorithm-to-find-longest-substring-with-character-count-of-at-least-k/
# https://binarysearch.com/problems/Longest-Substring-with-Character-Count-of-at-Least-K
# MEDIUM, DIVIDE-AND-CONQUER

class Solution:
    def solve(self, s, k):
        for c, count in Counter(s).items():
            if count < k:
                return max(self.solve(x, k) for x in s.split(c))
        return len(s)
