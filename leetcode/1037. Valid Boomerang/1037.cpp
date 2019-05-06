// https://helloacm.com/how-to-check-if-any-three-points-can-make-a-triangle/
// https://leetcode.com/problems/valid-boomerang/

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        vector<int> a = points[0];
        vector<int> b = points[1];
        vector<int> c = points[2];
        
        return ((a[0] * (b[1] - c[1]) +  
            b[0] * (c[1] - a[1]) +  
            c[0] * (a[1] - b[1])) != 0);
    }
};
