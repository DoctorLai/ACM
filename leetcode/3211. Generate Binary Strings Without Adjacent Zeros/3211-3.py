# https://helloacm.com/teaching-kids-programming-generate-binary-strings-without-adjacent-zeros-breadth-first-search-algorithm/
# https://leetcode.com/problems/generate-binary-strings-without-adjacent-zeros/
# MEDIUM, BFS

class Solution:
    def validStrings(self, n: int) -> List[str]:
        q = deque([[]])
        ans = []
        while q:
            cur = q.popleft()
            if len(cur) == n:
                ans.append("".join(cur))
            else:
                if len(cur) == 0 or cur[-1] == '1':
                    q.append(cur + ['0'])
                q.append(cur + ['1'])
        return ans
