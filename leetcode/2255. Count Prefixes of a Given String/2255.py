# https://helloacm.com/teaching-kids-programming-count-prefixes-of-a-given-string-trie/
# https://leetcode.com/problems/count-prefixes-of-a-given-string/
# EASY, TRIE

class Trie:
    def __init__(self):
        self.data = {}
        self.counter = 0
 
    def insert(self, word: str) -> None:
        cur = self
        for i in word:
            if not i in cur.data:
                cur.data[i] = Trie()
            cur = cur.data[i]
        cur.counter += 1
 
    def search(self, word: str) -> bool:
        cur = self
        for i in word:
            if not i in cur.data:
                return False
            cur = cur.data[i]
        return cur.counter > 0
        
    def startsWith(self, prefix: str) -> bool:
        cur = self
        for i in prefix:
            if not i in cur.data:
                return False
            cur = cur.data[i]
        return True  
    
    def count(self, prefix: str) -> int:
        cur = self
        for i in prefix:
            if not i in cur.data:
                return 0
            cur = cur.data[i]
        return cur.counter        
    
class Solution:
    def countPrefixes(self, words: List[str], s: str) -> int:
        trie = Trie()
        trie.insert(s)
        return sum(map(trie.startsWith, words))
