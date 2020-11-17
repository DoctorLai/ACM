// https://helloacm.com/can-a-string-be-constructing-by-removing-a-letter-from-another-string/
// https://binarysearch.com/problems/Remove-One-Letter
// EASY, STRING

bool solve(string s0, string s1) {
    if (s0.size() - s1.size() != 1) {
        return false;
    }
    for (int i = 0; i < s1.size(); ++ i) {
        if (s1[i] != s0[i]) {
            return s1.substr(i) == s0.substr(i + 1);
        }
    }
    return true;
}
