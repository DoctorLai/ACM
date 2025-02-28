# https://helloacm.com/teaching-kids-programming-another-bfs-to-generate-binary-strings-without-adjacent-zeros/
# https://leetcode.com/problems/generate-binary-strings-without-adjacent-zeros/
# MEDIUM, BFS

from typing import List
 
class Solution:
    def validStrings(self, n: int) -> List[str]:
        if n == 0:
            return []
        if n == 1:
            return ["0", "1"]
        
        ans = ["0", "1"]
        for i in range(1, n):
            cur = []
            for x in ans:
                if x[-1] == '1':
                    cur.append(x + "0")
                cur.append(x + "1")
            ans = cur
        return ans
