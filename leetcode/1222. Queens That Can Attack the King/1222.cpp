// https://helloacm.com/find-the-queens-that-can-attack-the-king/
// https://leetcode.com/problems/queens-that-can-attack-the-king/
// MEDIUM, ARRAY, HASH SET

class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> r;
        int dir[][2] = {{0, 1}, {1, 0}, {1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {-1, 1}, {1, -1}};
        unordered_set<string> qs;
        for (const auto &q: queens) {
            qs.insert(std::to_string(q[0]) + "," + std::to_string(q[1]));
        }
        for (int i = 0; i < 8; ++ i) {
            int dx = dir[i][0];
            int dy = dir[i][1];
            vector<int> pos(king);
            while ((pos[0] >= 0) && (pos[0] < 8) &&
                (pos[1] >= 0) && (pos[1] < 8)) {
                pos[0] += dx;
                pos[1] += dy;
                if (qs.count(
                          std::to_string(pos[0]) + "," +
                          std::to_string(pos[1]))) {
                    r.push_back(pos);
                    break;
                }
            }
        }
        return r;
    }
};
