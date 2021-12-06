# https://binarysearch.com/problems/Gene-Mutation-Groups
# https://helloacm.com/teaching-kids-programming-find-gene-mutation-groups-via-depth-first-search-algorithm/
# MEDIUM, DFS

class Solution:
    def solve(self, genes):        
        left = set(genes)

        def dfs(a):
            left.remove(a)
            for i in range(len(a)):
                for x in ('A', 'G', 'T', 'C'):
                    c = a[:i] + x + a[i + 1:]
                    if c in left:
                        dfs(c)

        ans = 0
        for i in genes:
            if i in left:
                ans += 1
                dfs(i)

        return ans
