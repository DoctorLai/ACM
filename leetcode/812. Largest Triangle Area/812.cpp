// https://helloacm.com/how-to-find-largest-triangle-area-using-shoelace-formula/
// https://leetcode.com/problems/largest-triangle-area/

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double value = -1;
        int sz = points.size();
        for (int i = 0; i < sz; ++ i) {
            for (int j = i + 1; j < sz; ++ j) {
                for (int k = j + 1; k < sz; ++ k) {
                    value = max(value, area(points[i], points[j], points[k]));
                }
            }
        }
        return value;
    }
    
    double area(vector<int> P, vector<int> Q, vector<int> R) {
        return 0.5 * abs(P[0] * Q[1] + Q[0] * R[1] + R[0] * P[1]
                         - P[1] * Q[0] - Q[1] * R[0] - R[1] * P[0]);
    }
};
