# https://helloacm.com/teaching-kids-programming-greatest-english-letter-in-upper-and-lower-case/
# https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/
# EASY, STRING

class Solution:
    def greatestLetter(self, s: str) -> str:
        s = set(s)        
        uppers = {x for x in s if x.isupper()}
        lowers = {x.upper() for x in s if x.islower()}
        both = uppers & lowers
        return sorted(both, reverse = True)[0] if both else ""
