// https://helloacm.com/algorithms-to-check-if-a-string-is-a-subsequence-string-of-another-string/
// https://binarysearch.com/problems/Subsequence-Strings
// MEDIUM, STRING

bool solve(string s1, string s2) {
    int i = 0, j = 0;
    while (i < s2.size()) {
        if (s1[j] == s2[i]) {
            j ++;
        }
        i ++;
    }
    return j == s1.size();
}
