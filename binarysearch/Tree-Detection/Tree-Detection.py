# https://helloacm.com/teaching-kids-programming-tree-detection-algorithm-via-breadth-first-search-determine-a-binary-tree/
# https://binarysearch.com/problems/Tree-Detection
# MEDIUM, DFS, GRAPH

class Solution:
    def solve(self, left, right):
        n = len(left)
        data = defaultdict(int)
        for i in range(n):
            if left[i] != -1:
                data[left[i]] += 1
            if right[i] != -1:
                data[right[i]] += 1
        root = [i for i in range(n) if data[i] == 0]
        if len(root) != 1:
            return False
        seen = set()
        q = deque([next(iter(root))])
        while q:
            cur = q.popleft()
            if cur in seen:
                return False
            seen.add(cur)
            if left[cur] != -1:
                q.append(left[cur])
            if right[cur] != -1:
                q.append(right[cur])
        return len(seen) == n
