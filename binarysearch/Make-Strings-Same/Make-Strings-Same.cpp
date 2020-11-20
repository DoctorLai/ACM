// https://helloacm.com/can-we-make-strings-same-by-unlimited-number-of-swaps/
// https://binarysearch.com/problems/Make-Strings-Same
// EASY, STRING, HASH TABLE

bool solve(string s, string t) {
    unordered_map<char, int> data;
    for (const auto &n: s) {
        data[n] ++;
    }
    for (const auto &n: t) {
        data[n] ++;
    }
    for (const auto &[a, b]: data) {
        if (b & 1) return false;
    }
    return true;
}
