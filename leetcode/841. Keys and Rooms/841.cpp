// https://helloacm.com/depth-first-search-and-breadth-first-search-algorithm-to-open-the-doors-to-the-rooms-with-keys/
// https://leetcode.com/problems/keys-and-rooms/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        dfs(0, rooms);
        return visited.size() == rooms.size();
    }
private:
    unordered_set<int> visited;
    void dfs(int room, vector<vector<int>>& rooms) {
        if (visited.count(room)) {
            return;
        }
        visited.insert(room);
        for (const auto &n: rooms[room]) {
            dfs(n, rooms);
        }
    }
};
