// https://helloacm.com/algorithm-to-count-intervals-intersecting-at-point/
// https://binarysearch.com/problems/Intervals-Intersecting-at-Point
// EASY, MATH

int solve(vector<vector<int>>& intervals, int point) {
    return count_if(begin(intervals), end(intervals), [&](auto &e) {
        return (e[0] <= point && e[1] >= point);
    });
}
