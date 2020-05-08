// https://helloacm.com/algorithm-to-check-if-all-points-are-on-the-same-line/
// https://leetcode.com/problems/check-if-it-is-a-straight-line/
// EASY, GEOMETRY

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() <= 2) return true;
        int dx = coordinates[0][0] - coordinates[1][0];
        int dy = coordinates[0][1] - coordinates[1][1];
        for (int i = 2; i < coordinates.size(); ++ i) {
            int dx1 = coordinates[0][0] - coordinates[i][0];
            int dy1 = coordinates[0][1] - coordinates[i][1];            
            if (dx1 * dy != dy1 * dx) return false;
        }
        return true;
    }
};
