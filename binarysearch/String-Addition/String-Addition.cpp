// https://helloacm.com/c-algorithm-to-add-two-big-integers-of-string-type/
// https://binarysearch.com/problems/String-Addition
// EASY, STRING

string solve(string a, string b) {
    int c = 0;
    int la = a.size() - 1;
    int lb = b.size() - 1;
    string ans = "";
    while ((la >= 0) || (lb >= 0) || (c > 0)) {
        int v = c;
        if (la >= 0) v += a[la --] - '0';
        if (lb >= 0) v += b[lb --] - '0';
        ans = ((char)(48 + v % 10)) + ans;
        c = v/10;
    }
    return ans;
}
