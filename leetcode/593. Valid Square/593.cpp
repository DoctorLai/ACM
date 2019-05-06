// https://helloacm.com/how-to-check-if-four-points-can-make-a-valid-square-c-and-java/
// https://leetcode.com/problems/valid-square/

class Solution {
public:
    int dist(vector<int> &p1, vector<int> &p2) {
        return pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2);
    }
       
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int> d;
        d.insert(dist(p1, p2));
        d.insert(dist(p1, p3));
        d.insert(dist(p1, p4));
        d.insert(dist(p2, p3));
        d.insert(dist(p2, p4));
        d.insert(dist(p3, p4));
        return d.size() == 2 && d.count(0) == 0;
    }
};
