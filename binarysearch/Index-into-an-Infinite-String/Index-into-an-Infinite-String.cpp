// https://helloacm.com/algorithms-to-compute-the-substring-with-indexing-into-an-infinite-string/
// https://binarysearch.com/problems/Index-into-an-Infinite-String
// EASY, STRING

string solve(string s, int i, int j) {
    int n = s.size();
    string ans = "";
    for (int k = i; k < j; ++ k) {
        ans += s[k % n];
    }
    return ans;
}
