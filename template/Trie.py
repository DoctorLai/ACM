class Trie:
    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.data = {}
        self.isLeaf = False
 
    def insert(self, word: str) -> None:
        """
        Inserts a word into the trie.
        """
        cur = self
        for i in word:
            if not i in cur.data:
                cur.data[i] = Trie()
            cur = cur.data[i]
        cur.isLeaf = True                        
 
    def search(self, word: str) -> bool:
        """
        Returns if the word is in the trie.
        """
        cur = self
        for i in word:
            if not i in cur.data:
                return False
            cur = cur.data[i]
        return cur.isLeaf
        
    def startsWith(self, prefix: str) -> bool:
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        cur = self
        for i in prefix:
            if not i in cur.data:
                return False
            cur = cur.data[i]
        return True    
