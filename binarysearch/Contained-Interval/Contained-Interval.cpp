// https://helloacm.com/algorithms-to-check-if-intervals-are-self-contained/
// https://binarysearch.com/problems/Contained-Interval
// EASY, MATH, SORT

bool solve(vector<vector<int>>& intervals) {
    sort(begin(intervals), end(intervals), [](auto &a, auto &b) {
        return (a[0] < b[0]) || ((a[0] == b[0]) && (a[1] > b[1]));
    });
    int curMax = -INT_MAX + 1;
    int curMin = INT_MAX;
    for (auto &n: intervals) {
        if (n[0] >= curMin && n[1] <= curMax) {
            return true;
        }
        curMax = max(curMax, n[1]);
        curMin = min(curMin, n[0]);
    }
    return false;
}
