// https://helloacm.com/algorithms-to-compute-the-fibonacci-string-sequence/
// https://binarysearch.com/problems/String-Sequence
// EASY, RECURSION, MEMOIZATION

string solve(string s0, string s1, int n) {
    unordered_map<int, string> memo;
    function<string(int)> A = [&](int n) {
        if (n == 0) return s0;
        if (n == 1) return s1;
        if (memo.count(n)) return memo[n];
        if (n & 1) {
            return memo[n] = A(n - 2) + A(n - 1);
        }
        return memo[n] = A(n - 1) + A(n - 2);
    };
    return A(n);
}
