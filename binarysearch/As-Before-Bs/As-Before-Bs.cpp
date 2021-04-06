// https://helloacm.com/minimum-letters-to-delete-to-get-as-before-bs-with-dynamic-programming-algorithm/
// https://binarysearch.com/problems/As-Before-Bs
// MEDIUM, DP

int solve(string s) {
    int n = static_cast<int>(s.size());
    if (n == 0) return 0;
    vector<int> leftA(n, 0);
    vector<int> rightB(n, 0);
    leftA[0] = s[0] == 'A' ? 1 : 0;
    for (int i = 1; i < n; ++ i) {
        leftA[i] = leftA[i - 1] + (s[i] == 'A' ? 1 : 0);
    }
    rightB.back() = s.back() == 'B' ? 1 : 0;
    for (int i = n - 2; i >= 0; -- i) {
        rightB[i] = rightB[i + 1] + (s[i] == 'B' ? 1 : 0);
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; ++ i) {
        ans = min(ans, i - leftA[i] + n - i - rightB[i]);
    }
    return ans;
}
