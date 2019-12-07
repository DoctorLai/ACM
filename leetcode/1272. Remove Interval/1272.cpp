// https://helloacm.com/algorithm-to-remove-a-interval-from-segments/
// https://leetcode.com/problems/remove-interval/
// MEDIUM, INTERVAL

class Solution {
public:
    vector<vector<int>> removeInterval(vector<vector<int>>& intervals, vector<int>& toBeRemoved) {
        vector<vector<int>> r;
        auto start = toBeRemoved[0];
        auto end = toBeRemoved[1];
        for (const auto &n: intervals) {
            if (n[0] < start) {
                r.push_back({n[0], min(start, n[1])});
            }
            if (n[1] > end) {
                r.push_back({max(end, n[0]), n[1]});
            }
        }
        return r;
    }
};
