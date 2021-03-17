// https://helloacm.com/rolling-hash-algorithm-to-find-the-longest-prefix-that-is-a-suffix/
// https://binarysearch.com/problems/Longest-Prefix-that-Is-a-Suffix
// HARD, ROLLING HASH

string solve(string s) {
    int64_t mod = 1e9+7;
    int64_t l = 0;
    int64_t r = 0;
    int64_t p = 1;
    int k = 0;
    for (int i = 0; i < s.size() - 1; ++ i) {
        l = (l * 128 + s[i]) % mod;
        r = (r + p * s[s.size() - 1 - i]) % mod;
        if (l == r) {
            k = i + 1;
        }
        p = (p * 128) % mod;
    }
    return s.substr(0, k);
}
