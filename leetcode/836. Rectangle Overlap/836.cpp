// https://helloacm.com/two-rectangles-overlap-detection-algorithm-in-c/
// https://leetcode.com/problems/rectangle-overlap/
// EASY, GEOMETRY

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int lowerleft0[2] = {rec1[0], rec1[1]};
        int lowerleft1[2] = {rec2[0], rec2[1]};
        int topright0[2] = {rec1[2], rec1[3]};
        int topright1[2] = {rec2[2], rec2[3]};
        
        return (!                
           ((topright1[0] <= lowerleft0[0]) ||
           (lowerleft1[0] >= topright0[0]) ||
           (topright1[1] <= lowerleft0[1]) ||
           (lowerleft1[1] >= topright0[1])));
    }
};
