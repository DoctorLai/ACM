// https://helloacm.com/interval-intersection-algorithm/
// https://binarysearch.com/problems/Interval-Intersection
// EASY, MATH

vector<int> solve(vector<vector<int>>& intervals) {
    int a = intervals[0][0];
    int b = intervals[0][1];
    for (auto &n: intervals) {
        a = max(a, n[0]);
        b = min(b, n[1]);
    }
    if (a > b) return {};
    return {a, b};
}
