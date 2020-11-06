// https://helloacm.com/c-algorithm-to-check-if-a-string-is-repeated/
// https://binarysearch.com/problems/Repeating-String
// EASY, STRING

bool solve(string s) {
    if (s.empty()) return false;
    for (int j = 1; (j <= s.size() / 2); ++ j) {
        if (s.size() % j != 0) continue;
        bool flag = true;
        for (int i = j; i < s.size(); ++ i) {
            if (s[i] != s[i - j]) {
                flag = false;
                break;
            }
        }
        if (flag) return true;
    }
    return false;
}
