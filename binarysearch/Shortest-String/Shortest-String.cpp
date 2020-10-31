// https://helloacm.com/compute-the-shortest-string-after-delete-different-adjacent-letters/
// https://binarysearch.com/problems/Shortest-String
// EASY, STRING, MATH

int solve(string s) {
    int a = 0;
    for (const auto &n: s) {
        a += n == '1';
    }
    return abs(a - ((int)s.size() - a));
}
