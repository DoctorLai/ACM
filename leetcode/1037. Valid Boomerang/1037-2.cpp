// https://helloacm.com/how-to-check-if-any-three-points-can-make-a-triangle/
// https://leetcode.com/problems/valid-boomerang/

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) 
    {
        // all 3 points must be different
        if (p[0] == p[1] || p[0] == p[2]) {
            return false;
        }
 
        const int A = p[0][0] - p[1][0];
        const int B = p[0][1] - p[1][1];
        
        auto C = [=](vector<int>& pt) { return A * pt[1] - B * pt[0]; };
        
        return C(p[0]) != C(p[2]);
    }
};
