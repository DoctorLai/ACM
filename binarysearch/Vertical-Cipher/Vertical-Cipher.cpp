// https://helloacm.com/simple-vertical-cipher-algorithm/
// https://binarysearch.com/problems/Vertical-Cipher
// EASY, STRING

vector<string> solve(string s, int n) {
    vector<string> ans(n, "");
    int r = 0;
    for (auto &c: s) {
        ans[r].push_back(c);
        r = (r + 1) % n;
    }
    return ans;
}
