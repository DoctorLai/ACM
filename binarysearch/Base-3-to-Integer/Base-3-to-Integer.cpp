// https://helloacm.com/convert-base-3-string-to-decimal-integer/
// https://binarysearch.com/problems/Base-3-to-Integer
// EASY, MATH

int solve(string s) {
    int ans = 0;
    for (auto &n: s) {
        ans = ans * 3 + n - '0';
    }
    return ans;
}
