// https://helloacm.com/algorithms-to-check-if-any-two-intervals-overlap/
// https://leetcode.com/problems/meeting-rooms/

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        for (size_t i = 0; i < intervals.size(); ++ i) {
            for (size_t j = i + 1; j < intervals.size(); ++ j) {
                if (overlap(intervals[i], intervals[j])) {
                    return false;
                }
            }
        }
        return true;
    }
    
    bool overlap(const Interval &a, const Interval &b) {
        return ((a.end > b.start) && (a.start <= b.start)) ||
                ((a.start < b.end) && (a.start >= b.start));
    }
};
