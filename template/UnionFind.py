class UnionFind:
    def __init__(self):
        self.parents = {}
        self.ranks = {}

    def union(self, a, b):
        a = self.find(a)
        b = self.find(b)

        if a == b:
            return False

        if self.ranks[a] == self.ranks[b]:
            self.ranks[a] += 1
        elif self.ranks[a] < self.ranks[b]:
            a, b = b, a
        self.parents[b] = a

        return True

    def find(self, x):
        if x not in self.parents:
            self.parents[x] = x
            self.ranks[x] = 0
            return x

        if self.parents[x] != x:
            self.parents[x] = self.find(self.parents[x])

        return self.parents[x]

    @property
    def root_count(self):
        return sum(x == p for x, p in self.parents.items())
