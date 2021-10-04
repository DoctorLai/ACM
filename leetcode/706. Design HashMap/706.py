# https://helloacm.com/teaching-kids-programming-design-a-hash-table/
# https://leetcode.com/problems/design-hashmap/
# MEDIUM, DESIGN

class MyHashMap:
    def __init__(self):
        self.TABLE_SIZE = 65537
        self.data = [[] for _ in range(self.TABLE_SIZE)]

    def getKey(self, key: int) -> int:
        return key % self.TABLE_SIZE
           
    def put(self, akey: int, value: int) -> None:
        key = self.getKey(akey)    
        for i in range(len(self.data[key])):
            if self.data[key][i][0] == akey:
                self.data[key][i][1] = value
                return
        self.data[key].append([akey, value])

    def get(self, akey: int) -> int:
        key = self.getKey(akey)
        for i in range(len(self.data[key])):
            if self.data[key][i][0] == akey:
                return self.data[key][i][1]
        return -1
    
    def remove(self, akey: int) -> None:
        key = self.getKey(akey)
        for i in range(len(self.data[key])):
            if self.data[key][i][0] == akey:
                self.data[key][i] = self.data[key][-1][:]
                self.data[key].pop()
                break
