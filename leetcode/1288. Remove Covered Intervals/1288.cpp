// https://helloacm.com/bruteforce-or-line-sweep-algorithms-to-remove-covered-intervals/
// https://leetcode.com/problems/remove-covered-intervals/
// MEDIUM, LINE SWEEP, SORTING

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;
        sort(begin(intervals), end(intervals), [](auto &a, auto &b) {
            return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
        });
        int count = 1;        
        int end = intervals[0][1];
        for (int i = 1; i < intervals.size(); ++ i) {
            if (intervals[i][1] > end) {
                count ++;
                end = intervals[i][1];
            }
        }
        return count;
    }
};
