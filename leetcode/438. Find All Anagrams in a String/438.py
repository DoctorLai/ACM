// https://helloacm.com/algorithm-of-two-pointer-sliding-windows-to-find-all-anagrams-in-a-string/
// https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        if len(p) > len(s):
            return []
        freq1 = collections.Counter(s[:len(p)])
        freq2 = collections.Counter(p)
        r = []
        if freq1 == freq2:
            r.append(0)
        i = len(p)
        while i < len(s):  
            if s[i] in freq1:
                freq1[s[i]] += 1
            else:
                freq1[s[i]] = 1
            freq1[s[i - len(p)]] -= 1
            if freq1[s[i - len(p)]] == 0:
                del freq1[s[i - len(p)]]
            if freq1 == freq2:
                r.append(i - len(p) + 1)
            i += 1
        return r            
        
