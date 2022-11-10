# https://helloacm.com/teaching-kids-programming-minimum-genetic-mutation-via-breadth-first-search-algorithm/
# https://leetcode.com/problems/minimum-genetic-mutation/
# MEDIUM, BFS

class Solution:
    def minMutation(self, start: str, end: str, bank: List[str]) -> int:
        bank = set(bank)
        queue = deque([(start, 0)])
        seen = set({start})
        
        while queue:
            node, steps = queue.popleft()
            if node == end:
                return steps

            for i in range(len(node)):
                for c in "ACGT":                
                    neighbor = node[:i] + c + node[i + 1:]
                    if neighbor not in seen and neighbor in bank and neighbor != node:
                        queue.append((neighbor, steps + 1))
                        seen.add(neighbor)

        return -1
