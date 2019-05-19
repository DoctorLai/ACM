# https://helloacm.com/algorithms-to-remove-all-adjacent-duplicates-in-a-string/
# https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution:
    def removeDuplicates(self, S: str) -> str:
        chr = list(S)
        cnt = 0
        i = len(chr) - 1
        while i > 0:
            if chr[i] == chr[i - 1]:
                cnt += 1
                chr.pop(i)
                chr.pop(i - 1)
                i -= 2
            else:
                i -= 1
        if cnt > 0: # until we can't find any duplicates.
            return self.removeDuplicates(''.join(chr))
        return ''.join(chr)            
