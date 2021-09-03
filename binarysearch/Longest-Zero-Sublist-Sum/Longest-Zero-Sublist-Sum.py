# https://helloacm.com/teaching-kids-programming-longest-zero-sublist-sum-via-prefix-sum/
# https://binarysearch.com/problems/Longest-Zero-Sublist-Sum
# HARD, PREFIX SUM

class Solution:
    def solve(self, nums):
        prefix = [0] + list(accumulate(nums))
        seen = defaultdict(list[int])
        for i, s in enumerate(prefix):
            seen[s].append(i)
        ans = 0
        for k in seen:
            ans = max(ans, seen[k][-1] - seen[k][0])
        return ans
