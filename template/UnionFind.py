class UnionFind:
    def __init__(self):
        self.parents = {}
        self.sizes = {}

    def union(self, a, b):
        a = self.find(a)
        b = self.find(b)
        if a == b:
            return False
        if self.sizes[a] <= self.sizes[b]:
            a, b = b, a
        self.parents[b] = a
        self.sizes[a] += self.sizes[b]
        return True

    def find(self, x):
        if x not in self.parents:
            self.parents[x] = x
            self.sizes[x] = 1
            return x
        if self.parents[x] != x:
            self.parents[x] = self.find(self.parents[x])
        return self.parents[x]

    @property
    def root_count(self):
        return sum(x == p for x, p in self.parents.items())
