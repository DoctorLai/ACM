class UnionFind:
    def __init__(self, n: int):
        self.parent = list(range(n))
        self.size = [1] * n
        self.setCount = n
    
    def findset(self, x: int) -> int:
        px = x
        while px != self.parent[px]:
            px = self.parent[px]
        while x != px:
            p = self.parent[x]
            self.parent[x] = px
            x = p
        return px
    
    def unite(self, x: int, y: int) -> bool:
        x, y = self.findset(x), self.findset(y)
        if x == y:
            return False
        if self.size[x] < self.size[y]:
            x, y = y, x
        self.parent[y] = x
        self.size[x] += self.size[y]
        self.setCount -= 1
        return True
    
    def sz(self):
        return self.setCount
    
    def connected(self, x: int, y: int) -> bool:
        x, y = self.findset(x), self.findset(y)
        return x == y
