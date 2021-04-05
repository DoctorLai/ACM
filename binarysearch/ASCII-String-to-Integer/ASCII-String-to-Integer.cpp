// https://helloacm.com/ascii-string-to-integer-conversion-algorithm/
// https://binarysearch.com/problems/ASCII-String-to-Integer
// EASY, STRING

int solve(string s) {
    int ans = 0;
    int n = static_cast<int>(s.size());
    int cur = 0;
    for (int i = 0; i < n; ++ i) {
        if (isdigit(s[i])) {
            cur = cur * 10 + s[i] - '0';
        } else {
            ans += cur;
            cur = 0;
        }
    }
    ans += cur;
    return ans;
}
