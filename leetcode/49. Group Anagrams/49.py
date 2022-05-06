# https://helloacm.com/teaching-kids-programming-algorithms-to-group-anagrams/
# https://leetcode.com/problems/group-anagrams/

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        data = defaultdict(list)
        for s in strs:
            data[tuple(sorted(s))].append(s)
        return data.values()
