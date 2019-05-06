// https://helloacm.com/how-to-check-if-any-three-points-can-make-a-triangle/
// https://leetcode.com/problems/valid-boomerang/

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int m1 = 0, m2 = 0;
        int x1 = points[0][0];
        int x2 = points[1][0];
        int x3 = points[2][0];
        int y1 = points[0][1];
        int y2 = points[1][1];
        int y3 = points[2][1];
        return ((y3 - y2) * (x2 - x1) !=  (y2 - y1) * (x3 - x2));
    }
};
