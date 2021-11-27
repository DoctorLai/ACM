# https://helloacm.com/teaching-kids-programming-repeated-k-length-substrings-sliding-window/
# https://binarysearch.com/problems/Repeated-K-Length-Substrings
# EASY, SLIDING WINDOW

class Solution:
    def solve(self, s, k):
        data = defaultdict(int)        
        for i in range(len(s) - k + 1):
            data[s[i:i+k]] += 1
        return len(list(filter(lambda x: x > 1, data.values())))
