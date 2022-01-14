# https://helloacm.com/teaching-kids-programming-search-engine-algorithm-using-trie-prefix-tree-and-depth-first-search-algorithm/
# https://binarysearch.com/problems/Search-Engine
# MEDIUM, DFS, TRIE

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

    def dfs(self, word, root = None) -> bool:
        if not root:
            root = self
        for i, c in enumerate(word):
            if c == '.':
                for a in root.data:
                    if self.dfs(word[i + 1:], root.data[a]):
                        return True
                return False
            elif c in root.data:
                root = root.data[c]
            else:
                return False
        return root.isLeaf

class SearchEngine:
    def __init__(self):
        self.words = Trie()

    def add(self, word):
        self.words.insert(word)

    def exists(self, word):
        return self.words.dfs(word)
